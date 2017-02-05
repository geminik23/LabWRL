#pragma once
#include <wrl.h>
#include "Fundamentals.h"


using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;

namespace ABI
{
namespace Fundamentals
{

class Printing: public RuntimeClass<IPrinting>
{
	int m_value = {0};
	InspectableClass(L"Fundamentals.Printing", BaseTrust);
public:

	STDMETHOD(put_Value)(int value);
	STDMETHOD(get_Value)(int * value);
	STDMETHOD(PrintTimes)(int times);
	STDMETHOD(Print)(void);
};


ActivatableClass(Printing)

}
}