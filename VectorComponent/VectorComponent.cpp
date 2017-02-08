#include "pch.h"
#include <wrl.h>
#include <windows.foundation.collections.h>
#include "VectorComponent.h"
#include "Vector.h"

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;
using namespace ABI::Windows::Foundation::Collections;



namespace ABI
{
namespace VectorComponent
{




class ColorList: public RuntimeClass<IColorList>
{
	InspectableClass(L"VectorComponent.ColorList", BaseTrust);

	ComPtr<collections::Vector<HSTRING>> m_pData;
public:
	ColorList()
	{
		MakeAndInitialize<collections::Vector<HSTRING>>(m_pData.GetAddressOf());
		m_pData->Append(HStringReference(L"red").Get());
		m_pData->Append(HStringReference(L"blue").Get());
		m_pData->Append(HStringReference(L"yellow").Get());
	}
	
	

	// Inherited via RuntimeClass
	STDMETHOD(get_List)(__FIVectorView_1_HSTRING ** result)
	{
		*result = nullptr;
		

		auto r = Make<collections::VectorView<HSTRING, collections::Vector<HSTRING>>>(m_pData.Get());
		return r.CopyTo(result);

	}

};

ActivatableClass(ColorList);

}
}