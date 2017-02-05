#include "pch.h"
#include "CppRT.h"


using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;


/*
	Difference with other componets
	1. Metadata_dir -> C:\Program Files (x86)\Windows Kits\10\UnionMetadata
	2. Target Platform Version -> 10.0.14393.0  NOT 8.1

*/
namespace ABI
{
namespace CppRT
{
	
class PageInitializer: public RuntimeClass<IPageInitializer>
{
	InspectableClass(L"CppRT.PageInitializer", BaseTrust);
public:

	STDMETHOD(InitPage)(IInspectable *value)
	{

		using namespace winrt::Windows::UI::Xaml::Controls;
		if (value)
		{
			
			winrt::com_ptr<winrt::Windows::IInspectable> pValue;
			pValue.copy_from(reinterpret_cast<winrt::ABI::Windows::IInspectable *>(value));
			
			auto controls = pValue.as<winrt::Windows::UI::Xaml::Controls::IUserControl>();

			Button btn;
			btn.Content(winrt::Windows::Foundation::PropertyValue::CreateString(L"Testing"));
			
			controls.Content(btn);
		}


		return S_OK;
	}

};

ActivatableClass(PageInitializer);

}
}