#include "pch.h"
#include "Printing.h"
#include <sstream>

HRESULT ABI::Fundamentals::Printing::put_Value(int value)
{
	m_value = value; return S_OK;
}

HRESULT ABI::Fundamentals::Printing::get_Value(int * value)
{
	*value = m_value; return S_OK;
}

HRESULT ABI::Fundamentals::Printing::PrintTimes(int times)
{

	std::wostringstream ss;
	for (int i = 0; i < times; ++i)
	{
		ss<<m_value<<L"\n";
	}

	OutputDebugString(ss.str().c_str());
	return S_OK;
}

HRESULT ABI::Fundamentals::Printing::Print(void)
{ return PrintTimes(1);
}
