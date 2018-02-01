/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.12.v201706201046.
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
#ifndef V1_SIMPLECALCULATOR_CALCULATORINTERFACE_CALCULATOR_SOMEIP_STUB_ADAPTER_HPP_
#define V1_SIMPLECALCULATOR_CALCULATORINTERFACE_CALCULATOR_SOMEIP_STUB_ADAPTER_HPP_

#include <v1/SimpleCalculator/CalculatorInterface/CalculatorStub.hpp>
#include <v1/SimpleCalculator/CalculatorInterface/CalculatorSomeIPDeployment.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>
#include <CommonAPI/SomeIP/StubAdapterHelper.hpp>
#include <CommonAPI/SomeIP/StubAdapter.hpp>
#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Constants.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace SimpleCalculator {
namespace CalculatorInterface {

template <typename _Stub = ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub, typename... _Stubs>
class CalculatorSomeIPStubAdapterInternal
    : public virtual CalculatorStubAdapter,
      public CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...>
{
public:
    typedef CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...> CalculatorSomeIPStubAdapterHelper;

    ~CalculatorSomeIPStubAdapterInternal() {
        deactivateManagedInstances();
        CalculatorSomeIPStubAdapterHelper::deinit();
    }

    /*
     * description: 
     * This attribute reflects calculator operation value.
     */
    void fireCalattributeAttributeChanged(const int32_t& value);

    /*
     * description: 
     * This is a callback to update operation_status change.
     */
    void fireOperation_statusEvent(const uint32_t& status);

    void deactivateManagedInstances() {
    }

    static CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        CommonAPI::Version
    > getCalculatorInterfaceVersionStubDispatcher;

    /*
     * description: 
     * This attribute reflects calculator operation value.
     */
    static CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        int32_t,
        CommonAPI::SomeIP::IntegerDeployment<int32_t>
    > getCalattributeAttributeStubDispatcher;
    static CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        int32_t,
        CommonAPI::SomeIP::IntegerDeployment<int32_t>
    > setCalattributeAttributeStubDispatcher;

    /*
     * description: 
     * Perform add operation.
     * (at)Return add result.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< uint32_t, uint32_t>,
        std::tuple< uint32_t>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint32_t>, CommonAPI::SomeIP::IntegerDeployment<uint32_t>>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint32_t>>
    > addStubDispatcher;
    /*
     * description: 
     * Perform divide operation.
     * (at)Return add result.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< float, float>,
        std::tuple< Calculator::DIVISION_ERROR, float>,
        std::tuple< CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
        std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::DIVISION_ERRORDeployment_t, CommonAPI::EmptyDeployment>
    > divisionStubDispatcher;
    /*
     * description: 
     * Perform Test1 operation.
     * (at)Return Test1 result.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< uint8_t>,
        std::tuple< uint8_t>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint8_t>>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint8_t>>
    > test1StubDispatcher;
    /*
     * description: 
     * Perform Test2 operation.
     * (at)Return Test2 result.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< uint16_t>,
        std::tuple< uint16_t>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>
    > test2StubDispatcher;
    /*
     * description: 
     * Perform Test3 operation.
     * (at)Return add result.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< uint32_t>,
        std::tuple< uint32_t>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint32_t>>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint32_t>>
    > test3StubDispatcher;
    /*
     * description: 
     * Perform Test4 operation.
     * (at)Return Test4 result.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< uint64_t>,
        std::tuple< uint64_t>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint64_t>>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint64_t>>
    > test4StubDispatcher;
    /*
     * description: 
     * Perform Test5 operation.
     * (at)Return Test5 result.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< std::string>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > test5StubDispatcher;
    /*
     * description: 
     * Perform Test6 operation.
     * (at)Return Test6 result.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< Calculator::MetadataElement>,
        std::tuple< Calculator::MetadataElement>,
        std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MetadataElementDeployment_t>,
        std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MetadataElementDeployment_t>
    > test6StubDispatcher;
    /*
     * description: 
     * Perform Test7 operation.
     * (at)Return Test7 result.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< Calculator::MetadataElementList>,
        std::tuple< Calculator::MetadataElementList>,
        std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MetadataElementListDeployment_t>,
        std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MetadataElementListDeployment_t>
    > test7StubDispatcher;
    /*
     * description: 
     * Perform Test8 operation.
     * (at)Return Test8 result.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< Calculator::MyArray01>,
        std::tuple< Calculator::MyArray01>,
        std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray01Deployment_t>,
        std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray01Deployment_t>
    > test8StubDispatcher;
    /*
     * description: 
     * Perform Test9 operation.
     * (at)Return Test9 result.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< Calculator::MyArray02>,
        std::tuple< Calculator::MyArray02>,
        std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray02Deployment_t>,
        std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray02Deployment_t>
    > test9StubDispatcher;
    /*
     * description: 
     * Perform Test10 operation.
     * (at)Return Test10 result.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< Calculator::MyArray03>,
        std::tuple< Calculator::MyArray03>,
        std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray03Deployment_t>,
        std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray03Deployment_t>
    > test10StubDispatcher;
    /*
     * description: 
     * Perform Test11 operation.
     * (at)Return Test11 result.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< Calculator::MyArray04>,
        std::tuple< Calculator::MyArray04>,
        std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray04Deployment_t>,
        std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray04Deployment_t>
    > test11StubDispatcher;
    /*
     * description: 
     * Perform Test12 operation.
     * (at)Return Test12 result.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
        std::tuple< CommonAPI::ByteBuffer>,
        std::tuple< CommonAPI::ByteBuffer>,
        std::tuple< CommonAPI::SomeIP::ByteBufferDeployment>,
        std::tuple< CommonAPI::SomeIP::ByteBufferDeployment>
    > test12StubDispatcher;

    CalculatorSomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub):
        CommonAPI::SomeIP::StubAdapter(_address, _connection),
        CalculatorSomeIPStubAdapterHelper(
            _address,
            _connection,
            std::dynamic_pointer_cast< CalculatorStub>(_stub))
    {

                /*
                 * description: 
                 * This attribute reflects calculator operation value.
                 */
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x80ea) }, &getCalattributeAttributeStubDispatcher );
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x80eb) }, &setCalattributeAttributeStubDispatcher );
        
                /*
                 * description: 
                 * Perform add operation.
                 * (at)Return add result.
                 */
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x1) }, &addStubDispatcher );
                /*
                 * description: 
                 * Perform divide operation.
                 * (at)Return add result.
                 */
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x2) }, &divisionStubDispatcher );
                /*
                 * description: 
                 * Perform Test1 operation.
                 * (at)Return Test1 result.
                 */
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x3) }, &test1StubDispatcher );
                /*
                 * description: 
                 * Perform Test2 operation.
                 * (at)Return Test2 result.
                 */
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x4) }, &test2StubDispatcher );
                /*
                 * description: 
                 * Perform Test3 operation.
                 * (at)Return add result.
                 */
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x5) }, &test3StubDispatcher );
                /*
                 * description: 
                 * Perform Test4 operation.
                 * (at)Return Test4 result.
                 */
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x6) }, &test4StubDispatcher );
                /*
                 * description: 
                 * Perform Test5 operation.
                 * (at)Return Test5 result.
                 */
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x7) }, &test5StubDispatcher );
                /*
                 * description: 
                 * Perform Test6 operation.
                 * (at)Return Test6 result.
                 */
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x8) }, &test6StubDispatcher );
                /*
                 * description: 
                 * Perform Test7 operation.
                 * (at)Return Test7 result.
                 */
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x9) }, &test7StubDispatcher );
                /*
                 * description: 
                 * Perform Test8 operation.
                 * (at)Return Test8 result.
                 */
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xa) }, &test8StubDispatcher );
                /*
                 * description: 
                 * Perform Test9 operation.
                 * (at)Return Test9 result.
                 */
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xb) }, &test9StubDispatcher );
                /*
                 * description: 
                 * Perform Test10 operation.
                 * (at)Return Test10 result.
                 */
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xc) }, &test10StubDispatcher );
                /*
                 * description: 
                 * Perform Test11 operation.
                 * (at)Return Test11 result.
                 */
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xd) }, &test11StubDispatcher );
                /*
                 * description: 
                 * Perform Test12 operation.
                 * (at)Return Test12 result.
                 */
                CalculatorSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0xe) }, &test12StubDispatcher );

        std::shared_ptr<CommonAPI::SomeIP::ClientId> clientId = std::make_shared<CommonAPI::SomeIP::ClientId>(0xFFFF);

        // Provided events/fields
        {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(0x80f2));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x80f2), itsEventGroups, false);
        }
        {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(CommonAPI::SomeIP::eventgroup_id_t(0x80ec)));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x80ec), itsEventGroups, true);
            fireCalattributeAttributeChanged(std::dynamic_pointer_cast< ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub>(_stub)->getCalattributeAttribute(clientId));
        }

    }

private:
};

template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::GetAttributeStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    CommonAPI::Version
    > CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::getCalculatorInterfaceVersionStubDispatcher(&CalculatorStub::getInterfaceVersion, false);

/*
 * description: 
 * This attribute reflects calculator operation value.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::GetAttributeStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    int32_t,
    CommonAPI::SomeIP::IntegerDeployment<int32_t>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::getCalattributeAttributeStubDispatcher(
    &CalculatorStub::getCalattributeAttribute, false);
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    int32_t,
    CommonAPI::SomeIP::IntegerDeployment<int32_t>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::setCalattributeAttributeStubDispatcher(
    &CalculatorStub::getCalattributeAttribute,
    &CalculatorStubRemoteEvent::onRemoteSetCalattributeAttribute,
    &CalculatorStubRemoteEvent::onRemoteCalattributeAttributeChanged,
    &CalculatorStubAdapter::fireCalattributeAttributeChanged,
    false
);

/*
 * description: 
 * Perform add operation.
 * (at)Return add result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< uint32_t, uint32_t>,
    std::tuple< uint32_t>,
    std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint32_t>, CommonAPI::SomeIP::IntegerDeployment<uint32_t>>,
    std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint32_t>>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::addStubDispatcher(
    &CalculatorStub::add,
    false,
    std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr)),
    std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr)));

/*
 * description: 
 * Perform divide operation.
 * (at)Return add result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< float, float>,
    std::tuple< Calculator::DIVISION_ERROR, float>,
    std::tuple< CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::DIVISION_ERRORDeployment_t, CommonAPI::EmptyDeployment>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::divisionStubDispatcher(
    &CalculatorStub::division,
    false,
    std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
    std::make_tuple(static_cast< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::DIVISION_ERRORDeployment_t * >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr)));

/*
 * description: 
 * Perform Test1 operation.
 * (at)Return Test1 result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< uint8_t>,
    std::tuple< uint8_t>,
    std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint8_t>>,
    std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint8_t>>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::test1StubDispatcher(
    &CalculatorStub::Test1,
    false,
    std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint8_t>* >(nullptr)),
    std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint8_t>* >(nullptr)));

/*
 * description: 
 * Perform Test2 operation.
 * (at)Return Test2 result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< uint16_t>,
    std::tuple< uint16_t>,
    std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>,
    std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::test2StubDispatcher(
    &CalculatorStub::Test2,
    false,
    std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr)),
    std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr)));

/*
 * description: 
 * Perform Test3 operation.
 * (at)Return add result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< uint32_t>,
    std::tuple< uint32_t>,
    std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint32_t>>,
    std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint32_t>>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::test3StubDispatcher(
    &CalculatorStub::Test3,
    false,
    std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr)),
    std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr)));

/*
 * description: 
 * Perform Test4 operation.
 * (at)Return Test4 result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< uint64_t>,
    std::tuple< uint64_t>,
    std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint64_t>>,
    std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint64_t>>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::test4StubDispatcher(
    &CalculatorStub::Test4,
    false,
    std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr)),
    std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr)));

/*
 * description: 
 * Perform Test5 operation.
 * (at)Return Test5 result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< std::string>,
    std::tuple< std::string>,
    std::tuple< CommonAPI::SomeIP::StringDeployment>,
    std::tuple< CommonAPI::SomeIP::StringDeployment>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::test5StubDispatcher(
    &CalculatorStub::Test5,
    false,
    std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)),
    std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)));

/*
 * description: 
 * Perform Test6 operation.
 * (at)Return Test6 result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< Calculator::MetadataElement>,
    std::tuple< Calculator::MetadataElement>,
    std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MetadataElementDeployment_t>,
    std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MetadataElementDeployment_t>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::test6StubDispatcher(
    &CalculatorStub::Test6,
    false,
    std::make_tuple(static_cast< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MetadataElementDeployment_t* >(nullptr)),
    std::make_tuple(static_cast< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MetadataElementDeployment_t* >(nullptr)));

/*
 * description: 
 * Perform Test7 operation.
 * (at)Return Test7 result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< Calculator::MetadataElementList>,
    std::tuple< Calculator::MetadataElementList>,
    std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MetadataElementListDeployment_t>,
    std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MetadataElementListDeployment_t>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::test7StubDispatcher(
    &CalculatorStub::Test7,
    false,
    std::make_tuple(static_cast< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MetadataElementListDeployment_t* >(nullptr)),
    std::make_tuple(static_cast< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MetadataElementListDeployment_t* >(nullptr)));

/*
 * description: 
 * Perform Test8 operation.
 * (at)Return Test8 result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< Calculator::MyArray01>,
    std::tuple< Calculator::MyArray01>,
    std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray01Deployment_t>,
    std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray01Deployment_t>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::test8StubDispatcher(
    &CalculatorStub::Test8,
    false,
    std::make_tuple(static_cast< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray01Deployment_t* >(nullptr)),
    std::make_tuple(static_cast< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray01Deployment_t* >(nullptr)));

/*
 * description: 
 * Perform Test9 operation.
 * (at)Return Test9 result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< Calculator::MyArray02>,
    std::tuple< Calculator::MyArray02>,
    std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray02Deployment_t>,
    std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray02Deployment_t>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::test9StubDispatcher(
    &CalculatorStub::Test9,
    false,
    std::make_tuple(static_cast< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray02Deployment_t* >(nullptr)),
    std::make_tuple(static_cast< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray02Deployment_t* >(nullptr)));

/*
 * description: 
 * Perform Test10 operation.
 * (at)Return Test10 result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< Calculator::MyArray03>,
    std::tuple< Calculator::MyArray03>,
    std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray03Deployment_t>,
    std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray03Deployment_t>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::test10StubDispatcher(
    &CalculatorStub::Test10,
    false,
    std::make_tuple(static_cast< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray03Deployment_t* >(nullptr)),
    std::make_tuple(static_cast< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray03Deployment_t* >(nullptr)));

/*
 * description: 
 * Perform Test11 operation.
 * (at)Return Test11 result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< Calculator::MyArray04>,
    std::tuple< Calculator::MyArray04>,
    std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray04Deployment_t>,
    std::tuple< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray04Deployment_t>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::test11StubDispatcher(
    &CalculatorStub::Test11,
    false,
    std::make_tuple(static_cast< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray04Deployment_t* >(nullptr)),
    std::make_tuple(static_cast< ::v1::SimpleCalculator::CalculatorInterface::Calculator_::MyArray04Deployment_t* >(nullptr)));

/*
 * description: 
 * Perform Test12 operation.
 * (at)Return Test12 result.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub,
    std::tuple< CommonAPI::ByteBuffer>,
    std::tuple< CommonAPI::ByteBuffer>,
    std::tuple< CommonAPI::SomeIP::ByteBufferDeployment>,
    std::tuple< CommonAPI::SomeIP::ByteBufferDeployment>
> CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::test12StubDispatcher(
    &CalculatorStub::Test12,
    false,
    std::make_tuple(static_cast< CommonAPI::SomeIP::ByteBufferDeployment* >(nullptr)),
    std::make_tuple(static_cast< CommonAPI::SomeIP::ByteBufferDeployment* >(nullptr)));

/*
 * description: 
 * This attribute reflects calculator operation value.
 */
template <typename _Stub, typename... _Stubs>
void CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::fireCalattributeAttributeChanged(const int32_t& value) {
    CommonAPI::Deployable< int32_t, CommonAPI::SomeIP::IntegerDeployment<int32_t>> deployedValue(value, static_cast< CommonAPI::SomeIP::IntegerDeployment<int32_t>* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                int32_t,
                CommonAPI::SomeIP::IntegerDeployment<int32_t>
            >
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x80ec),
        false,
        deployedValue
    );
}

/*
 * description: 
 * This is a callback to update operation_status change.
 */
template <typename _Stub, typename... _Stubs>
void CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>::fireOperation_statusEvent(const uint32_t& _status) {
    CommonAPI::Deployable< uint32_t, CommonAPI::SomeIP::IntegerDeployment<uint32_t>> deployed_status(_status, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<CommonAPI::SomeIP::SerializableArguments<  CommonAPI::Deployable< uint32_t, CommonAPI::SomeIP::IntegerDeployment<uint32_t> > 
    >>
        ::sendEvent(
            *this,
            CommonAPI::SomeIP::event_id_t(0x80f2),
            false,
             deployed_status 
    );
}

template <typename _Stub = ::v1::SimpleCalculator::CalculatorInterface::CalculatorStub, typename... _Stubs>
class CalculatorSomeIPStubAdapter
    : public CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>,
      public std::enable_shared_from_this< CalculatorSomeIPStubAdapter<_Stub, _Stubs...>> {
public:
    CalculatorSomeIPStubAdapter(const CommonAPI::SomeIP::Address &_address,
                                            const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                                            const std::shared_ptr<CommonAPI::StubBase> &_stub)
        : CommonAPI::SomeIP::StubAdapter(_address, _connection),
          CalculatorSomeIPStubAdapterInternal<_Stub, _Stubs...>(_address, _connection, _stub) {
    }
};

} // namespace CalculatorInterface
} // namespace SimpleCalculator
} // namespace v1

#endif // V1_SIMPLECALCULATOR_CALCULATORINTERFACE_Calculator_SOMEIP_STUB_ADAPTER_HPP_
