#pragma once

#include <wrl.h>
#include "Fundamentals.h"



using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;


namespace ABI
{
namespace Fundamentals
{

class SomeValueStatics: public RuntimeClass<INone>
{
	InspectableClass(L"Fundamentals.SomeValueStatics", BaseTrust);
public:
};


class StaticsFactory: public ActivationFactory<ISomeValueStatic>
{
	static int sValue;
public:
	STDMETHOD(get_StaticValue)(int * value);
};

ActivatableClassWithFactory(SomeValueStatics, StaticsFactory)


}
}