#include "pch.h"
#include "DMExample.h"



using namespace Windows::Foundation;
using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;
using namespace ABI::Windows::UI::Xaml::Data;

namespace ABI
{
namespace DMExample
{


class SomeData: public RuntimeClass < ISomeData, ABI::Windows::UI::Xaml::Data::INotifyPropertyChanged>
{
	EventSource<ABI::Windows::UI::Xaml::Data::IPropertyChangedEventHandler> m_events;

	InspectableClass(L"DMExample.SomeData", BaseTrust);

	RTHelper::DataBinding::PropertyChangedEventArg m_arg;

	HString m_value;


public:

	SomeData() : m_arg(HStringReference(L"Name").Get())
	{}

	HRESULT RuntimeClassInitialize()
	{
		m_value.Set(L"Example");

		return S_OK;
	}

	STDMETHOD(put_Name)(HSTRING value)
	{
		m_value.Set(value);

		m_events.InvokeAll(reinterpret_cast<IInspectable*>(this),m_arg.Get());
		return S_OK;
	}

	STDMETHOD(get_Name)(HSTRING * value)
	{
		m_value.CopyTo(value);
		return S_OK;
	}

	STDMETHOD(add_PropertyChanged)(
		ABI::Windows::UI::Xaml::Data::IPropertyChangedEventHandler *value,
		EventRegistrationToken *token)
	{
		return m_events.Add(value, token);
	}

	STDMETHOD(remove_PropertyChanged)(
		/* [in] */ EventRegistrationToken token)
	{
		return m_events.Remove(token);
	}

};

ActivatableClass(SomeData);

}

}

