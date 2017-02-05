#include "pch.h"
#include "SomeValueCtor.h"




STDMETHODIMP ABI::Fundamentals::SomeValueCtorFactory::ActivateInstance(IInspectable ** instance)
{
	return MakeAndInitialize<SomeValueCtor>(instance);
}

STDMETHODIMP ABI::Fundamentals::SomeValueCtorFactory::CreateSomeValueCtorWith(int v, ABI::Fundamentals::ISomeValue ** result)
{
	return MakeAndInitialize<SomeValueCtor>(result, v);
}

STDMETHODIMP ABI::Fundamentals::SomeValueCtor::get_Value(int * v)
{
	*v = this->m_value;
	return S_OK;
}
