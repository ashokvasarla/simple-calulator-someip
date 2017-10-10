include_directories(
    inc
    src-gen
    src-gen/v1/SimpleCalculator/CalculatorInterface
    ${CMAKE_SYSROOT}/usr/include/CommonAPI-3.1
    ${CMAKE_SYSROOT}/usr/include/dbus-1.0
    ${CMAKE_SYSROOT}/usr/lib/dbus-1.0/include
    ${CMAKE_SYSROOT}/usr/lib64/dbus-1.0/include
    ${CMAKE_SYSROOT}/usr/include/CommonAPI-3.1/CommonAPI/DBus
    ../../butterfly/commonapi/vSomeIP/interface
    ../../butterfly/commonapi/cpp-someip-runtime/include
)

link_directories(

)

add_executable(
    CalculatorClient
    src/CalculatorClient.cpp
    ../../src-gen/v1/SimpleCalculator/CalculatorInterface/CalculatorSomeIPDeployment.cpp
    ../../src-gen/v1/SimpleCalculator/CalculatorInterface/CalculatorSomeIPProxy.cpp
)


target_link_libraries(
    CalculatorClient
    PocoFoundation
    PocoUtil
    dlt
    CommonAPI
    CommonAPI-SomeIP
    vsomeip
)


install(
    TARGETS CalculatorClient
    DESTINATION bin
)
