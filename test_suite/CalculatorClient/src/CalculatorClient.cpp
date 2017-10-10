#include "CalculatorClient.h"
#include "CommonAPI/CommonAPI.hpp"
#include "CalculatorProxy.hpp"
#include <dlt/dlt.h>

using namespace v1_0::SimpleCalculator::CalculatorInterface;

//Declare context
DLT_DECLARE_CONTEXT(CalcClient)

/****************************************************************************
 Function Name     : CalculatorClient
 Description       : CalculatorClient Constructor
 Parameters        : none
 Return Type       : none
 ******************************************************************************/
CalculatorClient::CalculatorClient()
{
	//Register application with DLT
	DLT_REGISTER_APP("CALC","Calculator Client Application");

	//Register all context with DLT
	DLT_REGISTER_CONTEXT(CalcClient,"CLNT","Calculator Client Context");

	DLT_LOG(CalcClient,DLT_LOG_INFO,DLT_STRING("CalculatorClient CTOR"));
}

/****************************************************************************
 Function Name     : ~CalculatorClient
 Description       : CalculatorClient Destructor
 Parameters        : none
 Return Type       : none
 ******************************************************************************/
CalculatorClient::~CalculatorClient()
{
	DLT_LOG(CalcClient,DLT_LOG_INFO,DLT_STRING("CalculatorClient DTOR"));

	//Unregister contexts
	DLT_UNREGISTER_CONTEXT(CalcClient);

	//Unregister application with DLT
	DLT_UNREGISTER_APP();
}

/****************************************************************************
 Function Name     : main
 Description       : Main function
 Parameters        : args - Command line arguments list
 Return Type       : int
 ******************************************************************************/
int CalculatorClient::main(__attribute__((unused)) const std::vector<std::string>& args)
{
    if (args.size() < 3)
    {
    	// We expect 3 arguments: Command param1 param2
        std::cerr << "Usage: Command param1 param2" << std::endl;
        std::cerr << "E.g.: CalculatorClient add 2 3" << std::endl;
    }
    else
    {
		std::string 			cmd	= args[0];
		uint32_t  				param1 = stoi(args[1]);
		uint32_t  				param2 = stoi(args[2]);
		CommonAPI::CallStatus 	callStatus;
		uint32_t  result = 0;

		std::shared_ptr < CommonAPI::Runtime > runtime = CommonAPI::Runtime::get();
		std::shared_ptr <CalculatorProxy<>> calculatorClntProxy = runtime->buildProxy<CalculatorProxy>("local","CalculatorServer","client-sample");

		DLT_LOG(CalcClient,	DLT_LOG_INFO, DLT_STRING("Checking availability!"));

		while (!calculatorClntProxy->isAvailable() )
		{
			usleep(30);
		}

		DLT_LOG(CalcClient,DLT_LOG_INFO,DLT_STRING("Calulator server availabilable"));

		calculatorClntProxy->getOperation_statusEvent().subscribe([&](uint32_t status ){
			DLT_LOG(CalcClient,DLT_LOG_INFO,DLT_STRING("getOperation_statusEvent:: "), DLT_INT(status));
		});

		calculatorClntProxy->getCalattributeAttribute().getChangedEvent().subscribe([&](int32_t status ){
			DLT_LOG(CalcClient,DLT_LOG_INFO,DLT_STRING("getCalattributeAttribute:: "), DLT_INT(status));
		});

		if(cmd == "add")
		{
			DLT_LOG(CalcClient,DLT_LOG_INFO,DLT_STRING("Called add() public interface with input param1 = "),
											DLT_INT(param1),
											DLT_STRING("param2 = "),
											DLT_INT(param2));

			calculatorClntProxy->add(param1,param2,callStatus,result);

			DLT_LOG(CalcClient,DLT_LOG_INFO,DLT_STRING("Add result = "),
											DLT_INT(result));

		}
		else if(cmd == "div")
		{
			DLT_LOG(CalcClient,DLT_LOG_INFO,DLT_STRING("Called div() public interface with input param1 = "),
											DLT_INT(param1),
											DLT_STRING("param2 = "),
											DLT_INT(param2));
			Calculator::DIVISION_ERROR error;
			float rr;
			calculatorClntProxy->division(param1,param2,callStatus,error,rr);

			DLT_LOG(CalcClient,DLT_LOG_INFO,DLT_STRING("Div result = "),
											DLT_INT(rr));

		}
		else
		{
			DLT_LOG(CalcClient,DLT_LOG_INFO,DLT_STRING("Unhandled reques"));
		}
		while(1);
    }

	//Exit Successfully
	return Application::EXIT_OK;
}

POCO_SERVER_MAIN(CalculatorClient)
