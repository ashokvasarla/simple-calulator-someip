/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2010. Visteon Corporation owns all rights to           *
* this work and intends to maintain it in confidence to preserve             *
* its trade secret status. Visteon Corporation reserves the right,           *
* under the copyright laws of the United States or those of any              *
* other country that may have jurisdiction, to protect this work             *
* as an unpublished work, in the event of an inadvertent or                  *
* deliberate unauthorized publication. Visteon Corporation also              *
* reserves its rights under all copyright laws to protect this               *
* work as a published work, when appropriate. Those having access            *
* to this work may not copy it, use it, modify it or disclose the            *
* information contained in it without the written authorization              *
* of Visteon Corporation.                                                    *
*                                                                            *
******************************************************************************/

/*****************************************************************************

File Name        :  CalculatorStubImpl.h
Module Short Name:  CalculatorStubImpl header
Description      :  Implements CalculatorStubImpl class

******************************************************************************/
#ifndef CALCULATORSTUBIMPL_H_
#define CALCULATORSTUBIMPL_H_

// Includes
#include "CalculatorStubDefault.hpp"
#include "CommonAPI/CommonAPI.hpp"
#include <v1/SimpleCalculator/CalculatorInterface/CalculatorStub.hpp>

// Class declaration
class CalculatorStubImpl: public v1_0::SimpleCalculator::CalculatorInterface::CalculatorStubDefault
{
public:
	//Constructor
	CalculatorStubImpl();

	//Destructor
	virtual ~CalculatorStubImpl();

	//Methods
	void add(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _param1, uint32_t _param2, addReply_t _reply);
	void division(const std::shared_ptr<CommonAPI::ClientId> _client, float _a, float _b, divisionReply_t _reply);

};


#endif /* CALCULATORSTUBIMPL_H_ */
