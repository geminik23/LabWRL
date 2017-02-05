#include "pch.h"
#include "SomeValueStatics.h"

int ABI::Fundamentals::StaticsFactory::sValue = 54321;

HRESULT ABI::Fundamentals::StaticsFactory::get_StaticValue(int * value)
{
	*value = sValue;
	return S_OK;
}
