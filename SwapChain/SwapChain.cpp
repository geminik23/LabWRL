#include "pch.h"
#include "SwapChain.h"

#include <windows.ui.xaml.h>
#include <windows.ui.xaml.controls.h>

using namespace Windows::Foundation;

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;

using namespace ABI::Windows::UI::Xaml::Controls;


namespace ABI
{
namespace SwapChain
{


class InitSwapChainPanel: public RuntimeClass<IInitSwapChainPanel>
{
	InspectableClass(L"SwapChain.InitSwapChainPanel", BaseTrust);

public:



	// Inherited via RuntimeClass
	STDMETHOD(Initialize)(IInspectable * panel)
	{
		HRESULT hr = S_OK;
		ComPtr<ISwapChainPanel> pPanel;
		hr = panel->QueryInterface(pPanel.GetAddressOf());
		if(FAILED(hr)) return hr;

		// TODO initialize

		OutputDebugString(L"Panel initialized...\n");


		return hr;
	}

};

ActivatableClass(InitSwapChainPanel);

}
}