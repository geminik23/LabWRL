﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
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

namespace DMTestApp
{
	
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public sealed partial class MainPage : Page
    {

		private DMExample.SomeData data= new DMExample.SomeData();
		public MainPage()
        {
            this.InitializeComponent();
			
			//data.Name = "Hello";
			DataContext = data;
			data.PropertyChanged += Data_PropertyChanged;
		}

		private void Data_PropertyChanged(object sender, PropertyChangedEventArgs e)
		{
			System.Diagnostics.Debug.WriteLine(data.Name + " changed");
		}
		
	}
}