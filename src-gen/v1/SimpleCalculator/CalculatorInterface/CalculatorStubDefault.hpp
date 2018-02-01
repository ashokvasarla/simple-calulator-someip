/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.12.v201705291619.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
/*
 * description: 
 * The interface provies APIs to perform calculator operations * author: 
 * Module Owner Name
 */
#ifndef V1_SIMPLECALCULATOR_CALCULATORINTERFACE_Calculator_STUB_DEFAULT_HPP_
#define V1_SIMPLECALCULATOR_CALCULATORINTERFACE_Calculator_STUB_DEFAULT_HPP_


#include <CommonAPI/Export.hpp>

#include <v1/SimpleCalculator/CalculatorInterface/CalculatorStub.hpp>
#include <sstream>

# if defined(_MSC_VER)
#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif
# endif

namespace v1 {
namespace SimpleCalculator {
namespace CalculatorInterface {

/**
 * Provides a default implementation for CalculatorStubRemoteEvent and
 * CalculatorStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class COMMONAPI_EXPORT_CLASS_EXPLICIT CalculatorStubDefault
    : public virtual CalculatorStub {
public:
    COMMONAPI_EXPORT CalculatorStubDefault();

    COMMONAPI_EXPORT CalculatorStubRemoteEvent* initStubAdapter(const std::shared_ptr< CalculatorStubAdapter> &_adapter);

    COMMONAPI_EXPORT const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);

    COMMONAPI_EXPORT virtual const int32_t& getCalattributeAttribute();
    COMMONAPI_EXPORT virtual const int32_t& getCalattributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    COMMONAPI_EXPORT virtual void setCalattributeAttribute(int32_t _value);
    COMMONAPI_EXPORT virtual void setCalattributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, int32_t _value);

    /*
     * description: 
     * Perform add operation.
     * (at)Return add result.
     */
    COMMONAPI_EXPORT virtual void add(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _param1, uint32_t _param2, addReply_t _reply);
    /*
     * description: 
     * Perform divide operation.
     * (at)Return add result.
     */
    COMMONAPI_EXPORT virtual void division(const std::shared_ptr<CommonAPI::ClientId> _client, float _a, float _b, divisionReply_t _reply);
    /*
     * description: 
     * Perform Test1 operation.
     * (at)Return Test1 result.
     */
    COMMONAPI_EXPORT virtual void Test1(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _param, Test1Reply_t _reply);
    /*
     * description: 
     * Perform Test2 operation.
     * (at)Return Test2 result.
     */
    COMMONAPI_EXPORT virtual void Test2(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t _param, Test2Reply_t _reply);
    /*
     * description: 
     * Perform Test3 operation.
     * (at)Return add result.
     */
    COMMONAPI_EXPORT virtual void Test3(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _param, Test3Reply_t _reply);
    /*
     * description: 
     * Perform Test4 operation.
     * (at)Return Test4 result.
     */
    COMMONAPI_EXPORT virtual void Test4(const std::shared_ptr<CommonAPI::ClientId> _client, uint64_t _param, Test4Reply_t _reply);
    /*
     * description: 
     * Perform Test5 operation.
     * (at)Return Test5 result.
     */
    COMMONAPI_EXPORT virtual void Test5(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _name, Test5Reply_t _reply);
    /*
     * description: 
     * Perform Test6 operation.
     * (at)Return Test6 result.
     */
    COMMONAPI_EXPORT virtual void Test6(const std::shared_ptr<CommonAPI::ClientId> _client, Calculator::MetadataElement _param, Test6Reply_t _reply);
    /*
     * description: 
     * Perform Test7 operation.
     * (at)Return Test7 result.
     */
    COMMONAPI_EXPORT virtual void Test7(const std::shared_ptr<CommonAPI::ClientId> _client, Calculator::MetadataElementList _param, Test7Reply_t _reply);
    /*
     * description: 
     * Perform Test8 operation.
     * (at)Return Test8 result.
     */
    COMMONAPI_EXPORT virtual void Test8(const std::shared_ptr<CommonAPI::ClientId> _client, Calculator::MyArray01 _param, Test8Reply_t _reply);
    /*
     * description: 
     * Perform Test9 operation.
     * (at)Return Test9 result.
     */
    COMMONAPI_EXPORT virtual void Test9(const std::shared_ptr<CommonAPI::ClientId> _client, Calculator::MyArray02 _param, Test9Reply_t _reply);
    /*
     * description: 
     * Perform Test10 operation.
     * (at)Return Test10 result.
     */
    COMMONAPI_EXPORT virtual void Test10(const std::shared_ptr<CommonAPI::ClientId> _client, Calculator::MyArray03 _param, Test10Reply_t _reply);
    /*
     * description: 
     * Perform Test11 operation.
     * (at)Return Test11 result.
     */
    COMMONAPI_EXPORT virtual void Test11(const std::shared_ptr<CommonAPI::ClientId> _client, Calculator::MyArray04 _param, Test11Reply_t _reply);
    /*
     * description: 
     * Perform Test12 operation.
     * (at)Return Test12 result.
     */
    COMMONAPI_EXPORT virtual void Test12(const std::shared_ptr<CommonAPI::ClientId> _client, CommonAPI::ByteBuffer _name, Test12Reply_t _reply);

    /*
     * description: 
     * This is a callback to update operation_status change.
     */
    COMMONAPI_EXPORT virtual void fireOperation_statusEvent(const uint32_t &_status);

    
protected:
    /*
     * description: 
     * This attribute reflects calculator operation value.
     */
    COMMONAPI_EXPORT virtual bool trySetCalattributeAttribute(int32_t _value);
    COMMONAPI_EXPORT virtual bool validateCalattributeAttributeRequestedValue(const int32_t &_value);
    COMMONAPI_EXPORT virtual void onRemoteCalattributeAttributeChanged();
    class COMMONAPI_EXPORT_CLASS_EXPLICIT RemoteEventHandler: public virtual CalculatorStubRemoteEvent {
    public:
        COMMONAPI_EXPORT RemoteEventHandler(CalculatorStubDefault *_defaultStub);

        /*
         * description: 
         * This attribute reflects calculator operation value.
         */
        COMMONAPI_EXPORT virtual bool onRemoteSetCalattributeAttribute(int32_t _value);
        COMMONAPI_EXPORT virtual bool onRemoteSetCalattributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, int32_t _value);
        COMMONAPI_EXPORT virtual void onRemoteCalattributeAttributeChanged();


    private:
        CalculatorStubDefault *defaultStub_;
    };
protected:
    CalculatorStubDefault::RemoteEventHandler remoteEventHandler_;

private:

    /*
     * description: 
     * This attribute reflects calculator operation value.
     */
    int32_t calattributeAttributeValue_ {};

    CommonAPI::Version interfaceVersion_;
};

} // namespace CalculatorInterface
} // namespace SimpleCalculator
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_SIMPLECALCULATOR_CALCULATORINTERFACE_Calculator_STUB_DEFAULT