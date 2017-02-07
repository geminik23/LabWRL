#include "pch.h"
#include "ValueContainer.h"

HRESULT ABI::Delegates::ValueContainer::get_Value(int * v)
{
	*v = this->m_value;

	return S_OK;
}

HRESULT ABI::Delegates::ValueContainer::put_Value(int v)
{
	this->m_value = v;
	auto hr = m_event.InvokeAll(this, v);
	if(FAILED(hr)) return hr;
	hr = m_event.InvokeAll(this, v);
	return hr;
}
