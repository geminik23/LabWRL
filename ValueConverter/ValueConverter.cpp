#include "pch.h"
#include "ValueConverter.h"
#include <windows.ui.xaml.data.h>

using namespace Windows::Foundation;
using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;

using namespace ABI::Windows::UI::Xaml::Data;


namespace ABI
{
namespace ValueConverter
{

class DataConverter: public RuntimeClass<IDataConverter, IValueConverter>
{
	InspectableClass(L"ValueConverter.DataConverter", BaseTrust);


	ComPtr<IPropertyValueStatics> pProperty;
public:
	HRESULT RuntimeClassInitialize()
	{
		HRESULT hr = S_OK;
		hr = Windows::Foundation::GetActivationFactory(HStringReference(RuntimeClass_Windows_Foundation_PropertyValue).Get(), pProperty.GetAddressOf());

		return hr;
	}

	STDMETHOD(Convert)(IInspectable * value, ABI::Windows::UI::Xaml::Interop::TypeName /*targetType*/, IInspectable * /*parameter*/, HSTRING /*language*/, IInspectable ** returnValue)
	{
		HRESULT hr = S_OK;

		ComPtr<IPropertyValue> pValue;
		hr = value->QueryInterface(pValue.GetAddressOf());
		if (FAILED(hr)) return hr;

		boolean b;
		pValue->GetBoolean(&b);
		hr = pProperty->CreateInt32((b ? ABI::Windows::UI::Xaml::Visibility_Visible : ABI::Windows::UI::Xaml::Visibility_Collapsed), returnValue);

		return hr;
	}

	STDMETHOD(ConvertBack)(IInspectable * value, ABI::Windows::UI::Xaml::Interop::TypeName /*targetType*/, IInspectable * /*parameter*/, HSTRING /*language*/, IInspectable ** returnValue)
	{
		HRESULT hr = S_OK;

		ComPtr<IPropertyValue> pValue;
		hr = value->QueryInterface(pValue.GetAddressOf());
		if (FAILED(hr)) return hr;

		INT32 v;
		pValue->GetInt32(&v);
		hr = pProperty->CreateBoolean((v == ABI::Windows::UI::Xaml::Visibility_Visible ? true : false), returnValue);

		return hr;
	}

};

class SomeData: public RuntimeClass<ISomeData, INotifyPropertyChanged>
{
	InspectableClass(L"ValueConverter.SomeData", BaseTrust);


	EventSource<IPropertyChangedEventHandler> m_eventSource;
	RTHelper::DataBinding::PropertyChangedEventArg m_eventArg;


	bool m_data{ false };

public:
	SomeData() :m_eventArg(HStringReference(L"Data").Get()) {}



	STDMETHOD(add_PropertyChanged)(ABI::Windows::UI::Xaml::Data::IPropertyChangedEventHandler * value, EventRegistrationToken * token)
	{
		return m_eventSource.Add(value, token);
	}

	STDMETHOD(remove_PropertyChanged)(EventRegistrationToken token)
	{
		return m_eventSource.Remove(token);
	}

	STDMETHOD(put_Data)(boolean value)
	{
		m_data = (bool)(value);
		m_eventSource.InvokeAll(reinterpret_cast<IInspectable *>(this), m_eventArg.Get());
		return S_OK;
	}

	STDMETHOD(get_Data)(boolean * value)
	{
		*value = m_data;
		return S_OK;
	}
};


ActivatableClass(DataConverter);
ActivatableClass(SomeData);


}
}