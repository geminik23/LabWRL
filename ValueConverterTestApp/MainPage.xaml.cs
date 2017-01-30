using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace ValueConverterTestApp
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {

		ValueConverter.SomeData data;
		public MainPage()
        {
			
			this.InitializeComponent();
			data = new ValueConverter.SomeData();
			data.Data = false;
			data.PropertyChanged += Data_PropertyChanged;

			DataContext = data;
			
			var binding = new Binding
			{
				Source = check,
				Path = new PropertyPath("IsChecked"),
				Mode = BindingMode.OneWay,
				Converter = new ValueConverter.DataConverter(),
				UpdateSourceTrigger = UpdateSourceTrigger.PropertyChanged
			};
			BindingOperations.SetBinding(view, TextBlock.VisibilityProperty, binding);
		}

		private void Data_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
		{
			System.Diagnostics.Debug.WriteLine("changed : " + data.Data);
		}
	}
}
