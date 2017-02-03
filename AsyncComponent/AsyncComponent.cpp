#include "pch.h"
#include "AsyncComponent.h"

//using namespace Windows::Foundation;
using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;



namespace ABI
{
namespace AsyncComponent
{

class MathOp: public RuntimeClass<IMathOp>
{
	InspectableClass(L"AsyncComponent.MathOp", BaseTrust);
public:



	// Inherited via RuntimeClass
	STDMETHOD(Operate)(INT32 v1, INT32 v2, INT32 * v3)
	{
		v2 = std::abs(v2);
		while (v2-- != 0) v1 += v1;
		*v3 = v1;

		return S_OK;
	}

	STDMETHOD(OperateAsync)(INT32 v1, INT32 v2, __FIAsyncOperation_1_int ** value)
	{
		//auto asynop = ::Make<AsyncOperation<INT32>>([=](){
		//	return v1+v2;
		//});
		//asynop.CopyTo(value);
		return S_OK;
	}

	STDMETHOD(OperateAndAddAsync)(INT32 v1, INT32 v2, INT32 v3, __FIAsyncOperation_1_int ** value)
	{
		ComPtr<__FIAsyncOperation_1_int> pOp;
		OperateAsync(v1, v2, pOp.GetAddressOf());

		//auto multipOp = Make<AsyncOperation<INT32>>(pOp, [=] {
		//	int result;
		//	pOp->GetResults(&result);
		//	return result + v3;
		//});
		//multipOp.CopyTo(value);
		return S_OK;
	}

};

ActivatableClass(MathOp);



}
}
