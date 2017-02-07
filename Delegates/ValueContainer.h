#pragma once


#pragma comment(lib, "runtimeobject")
#include "Delegates.h"
#include <wrl.h>
#include <windows.foundation.h>


using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;

namespace ABI
{
namespace Delegates
{


class ValueContainer: public RuntimeClass<IValueContainer>
{
	InspectableClass(L"Delegates.ValueContainer", BaseTrust);

	using IValueChangeHandler2 = ABI::Windows::Foundation::ITypedEventHandler<ABI::Delegates::ValueContainer *, int>;

	EventSource<IValueChangeHandler> m_event;
	EventSource<IValueChangeHandler2> m_event2;


	int m_value = {0};
public:


	STDMETHOD(get_Value)(int * v);
	STDMETHOD(put_Value)(int v);

	STDMETHOD(add_ValueChanged)(ABI::Delegates::IValueChangeHandler * handler, EventRegistrationToken * token)
	{
		return m_event.Add(handler, token);
	}
	STDMETHOD(remove_ValueChanged)(EventRegistrationToken token)
	{
		return m_event.Remove(token);
	}

	STDMETHOD(add_ValueChanged2)(IValueChangeHandler2 * handler, EventRegistrationToken * token)
	{
		return m_event2.Add(handler, token);
	}
	STDMETHOD(remove_ValueChanged2)(EventRegistrationToken token)
	{
		return m_event2.Remove(token);
	}

};
ActivatableClass(ValueContainer);


}
}