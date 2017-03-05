#include "pch.h"
#include "TypeInfoTest.h"

#include <sstream>
#include <iostream>



using namespace Microsoft::WRL::Wrappers;
using namespace Microsoft::WRL;

namespace ABI
{
namespace TypeInfoTest
{

class TypeInfoReceiver : public RuntimeClass <ITypeInfoReceiver>
{
	InspectableClass(L"TypeInfoTest.TypeInfoReceiver", TrustLevel::BaseTrust);
public:

	


	// Inherited via RuntimeClass
	STDMETHOD(Received)(ABI::Windows::UI::Xaml::Interop::TypeName tn)
	{
		unsigned int length;
		HString name;
		name.Set(tn.Name);

	
		std::wstringstream ss;
		ss<< L"Name : "<< name.GetRawBuffer(&length);
		ss << L", Kind : "<< tn.Kind<<L'\n';

		OutputDebugString(ss.str().c_str());
		

		return S_OK;
	}

};

ActivatableClass(TypeInfoReceiver);



}
}