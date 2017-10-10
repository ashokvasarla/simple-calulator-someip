#include "CalculatorStubImpl.h"
#include <dlt/dlt.h>

//Import Context
DLT_IMPORT_CONTEXT(CalcServer)

/****************************************************************************
 Function Name     : CalculatorStubImpl
 Description       : CalculatorStubImpl Constructor
 Parameters        : none
 Return Type       : none
 ****************************************************************************/
CalculatorStubImpl::CalculatorStubImpl()
{
	DLT_LOG(CalcServer,DLT_LOG_INFO,DLT_STRING("CalculatorStubImpl CTOR"));
}

/****************************************************************************
 Function Name     : ~CalculatorStubImpl
 Description       : CalculatorStubImpl Destructor
 Parameters        : none
 Return Type       : none
 ******************************************************************************/
CalculatorStubImpl::~CalculatorStubImpl()
{
	DLT_LOG(CalcServer,DLT_LOG_INFO,DLT_STRING("CalculatorStubImpl DTOR"));
}

/****************************************************************************
 Function Name     : add
 Description       : Add method to add 2 numbers
 Parameters        : _client - ClientObj
 	 	 	 	 	 _param1 - First parameter to add
 	 	 	 	 	 _param1 - Second parameter to add
 	 	 	 	 	 _reply - Add result
 Return Type       : void
 ******************************************************************************/
void CalculatorStubImpl::add(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _param1, uint32_t _param2, addReply_t _reply)
{
	DLT_LOG(CalcServer,DLT_LOG_INFO,DLT_STRING("Received add() request wuth param1 = "),
									DLT_INT(_param1),
									DLT_STRING("param2 = "),
									DLT_INT(_param2));

	_reply( _param1 + _param2);
	setCalattributeAttribute(5);
}

void CalculatorStubImpl::division(const std::shared_ptr<CommonAPI::ClientId> _client, float _a, float _b, divisionReply_t _reply)
{
	std::cout << "CalculatorInterfaceImpl::division requested with a = " << _a << " b = " << _b << std::endl;
	::v1::SimpleCalculator::CalculatorInterface::Calculator::DIVISION_ERROR error;
	uint32_t status;
	float result=0;
	//std::this_thread::sleep_for(std::chrono::seconds(10));
	if ( _b == 0 )
	{
	   error = error.DIVIDE_BYZERO;
	   _reply(error,result);
	   status=0;
	   return;
    }
    else
    {
		result= _a / _b;
		status=1;
		error = error.NO_ERROR;
		_reply(error,result);

	}
	fireOperation_statusEvent(status);

}

