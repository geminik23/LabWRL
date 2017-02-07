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

using Delegates;
using System.Diagnostics;
// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace DelegatesApp
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
		ValueContainer m_value;
        public MainPage()
        {
            this.InitializeComponent();

			m_value = new ValueContainer();
			m_value.Value = 3;
			
			m_value.ValueChanged += M_value_ValueChanged;
			m_value.ValueChanged2 += new TypedEventHandler<ValueContainer, int>(M_value_ValueChanged);

			m_value.Value = 5;

		}

		private void M_value_ValueChanged(ValueContainer sender, int value)
		{
			Debug.Assert(sender == this.m_value);
			Debug.Assert(value == this.m_value.Value);
		}
	}
}
