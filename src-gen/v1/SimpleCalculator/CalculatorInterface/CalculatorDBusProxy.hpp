/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.12.v201706201043.
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
#ifndef V1_SIMPLECALCULATOR_CALCULATORINTERFACE_Calculator_DBUS_PROXY_HPP_
#define V1_SIMPLECALCULATOR_CALCULATORINTERFACE_Calculator_DBUS_PROXY_HPP_

#include <v1/SimpleCalculator/CalculatorInterface/CalculatorProxyBase.hpp>
#include "v1/SimpleCalculator/CalculatorInterface/CalculatorDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusAttribute.hpp>
#include <CommonAPI/DBus/DBusEvent.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

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

class CalculatorDBusProxy
    : virtual public CalculatorProxyBase,
      virtual public CommonAPI::DBus::DBusProxy {
public:
    CalculatorDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~CalculatorDBusProxy() { }

    virtual CalattributeAttribute& getCalattributeAttribute();

    virtual Operation_statusEvent& getOperation_statusEvent();

    /*
     * description: 
     * Perform add operation.
     * (at)Return add result.
     */
    virtual void add(const uint32_t &_param1, const uint32_t &_param2, CommonAPI::CallStatus &_internalCallStatus, uint32_t &_result, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> addAsync(const uint32_t &_param1, const uint32_t &_param2, AddAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /*
     * description: 
     * Perform divide operation.
     * (at)Return add result.
     */
    virtual void division(const float &_a, const float &_b, CommonAPI::CallStatus &_internalCallStatus, Calculator::DIVISION_ERROR &_error, float &_result, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> divisionAsync(const float &_a, const float &_b, DivisionAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:

    CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<CalattributeAttribute, CommonAPI::DBus::IntegerDeployment>> calattribute_;

    CommonAPI::DBus::DBusEvent<Operation_statusEvent, CommonAPI::Deployable< uint32_t, CommonAPI::DBus::IntegerDeployment >> operation_status_;

};

} // namespace CalculatorInterface
} // namespace SimpleCalculator
} // namespace v1

#endif // V1_SIMPLECALCULATOR_CALCULATORINTERFACE_Calculator_DBUS_PROXY_HPP_

