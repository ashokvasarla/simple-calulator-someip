
cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_FLAGS --std=c++11)

include_directories(
    inc
    src-gen
    src-gen/v1/SimpleCalculator/CalculatorInterface
    /home/ashok/work_dir/capi_someIP_study/capicxx-core-runtime/include
    /home/ashok/work_dir/capi_someIP_study/capicxx-someip-runtime/include
    /home/ashok/work_dir/capi_someIP_study/vSomeIP/interface
)

link_directories(
    /home/ashok/work_dir/capi_someIP_study/capicxx-core-runtime/build
    /home/ashok/work_dir/capi_someIP_study/capicxx-someip-runtime/build
    /home/ashok/work_dir/capi_someIP_study/vSomeIP/build
)

add_executable(
    CalculatorServer
    src/CalculatorServer.cpp
    src/CalculatorStubImpl.cpp
    src-gen/v1/SimpleCalculator/CalculatorInterface/CalculatorStubDefault.cpp
    src-gen/v1/SimpleCalculator/CalculatorInterface/CalculatorSomeIPStubAdapter.cpp
    src-gen/v1/SimpleCalculator/CalculatorInterface/CalculatorSomeIPDeployment.cpp
)


target_link_libraries(
    CalculatorServer
    PocoFoundation
    PocoUtil
    CommonAPI
    CommonAPI-SomeIP
    vsomeip
    boost_system
    boost_thread
    boost_log
    dlt
)

install(
    TARGETS CalculatorServer
    DESTINATION bin
)

add_subdirectory(
    test_suite/CalculatorClient
)


