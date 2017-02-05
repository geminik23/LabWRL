#pragma once

#include "Fundamentals.h"
#include <wrl.h>


using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;

namespace ABI
{
namespace Fundamentals
{

class SomeValueCtor: public RuntimeClass<ISomeValue>
{
	InspectableClass(L"Fundamentals.SomeValueCtor", BaseTrust);

	int m_value{};
public:
	HRESULT RuntimeClassInitialize()
	{
		m_value = 123;
		return S_OK;
	}

	HRESULT RuntimeClassInitialize(int value)
	{
		m_value = value;
		return S_OK;
	}

	// Inherited via RuntimeClass
	STDMETHOD(get_Value)(int * v) override;
};


class SomeValueCtorFactory: public ActivationFactory<ICtorFactory>
{
public:

	STDMETHOD(ActivateInstance)(IInspectable ** instance);

	// Inherited via ActivationFactory
	STDMETHOD(CreateSomeValueCtorWith)(int value, ABI::Fundamentals::ISomeValue ** result);
};

ActivatableClassWithFactory(SomeValueCtor, SomeValueCtorFactory)



}
}