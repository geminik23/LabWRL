using System;
using System.Collections.Generic;
using System.Diagnostics;
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

namespace FundamentalsApp
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public sealed partial class MainPage : Page
	{
		public MainPage()
		{
			this.InitializeComponent();

			// Constructor Test
			var ctor1 = new Fundamentals.SomeValueCtor();
			Debug.WriteLine(ctor1.Value);
			var ctor2 = new Fundamentals.SomeValueCtor(321);
			Debug.WriteLine(ctor2.Value);

			// Statics
			Debug.WriteLine(Fundamentals.SomeValueStatics.StaticValue);

			// Overloads
			var overloads = new Fundamentals.Printing();
			overloads.Value = 233;
			overloads.Print();

			overloads.Value = 234;
			overloads.Print(3);


		}
	}
}
