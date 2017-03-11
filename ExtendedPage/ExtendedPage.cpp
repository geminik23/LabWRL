#include "pch.h"
#include "ExtendedPage.h"

#include <windows.ui.xaml.controls.h>

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;


namespace ABI
{
namespace ExtendedPage
{

class ExtendedPage : public RuntimeClass<IExtendedPage>
{
	InspectableClass(L"ExtendedPage.ExtendedPage", TrustLevel::BaseTrust);
public:



};

ActivatableClass(ExtendedPage);

}
}