cmake_minimum_required(VERSION 3.27)
project(cpp_playground_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_playground_2 main.cpp
        oop_programming_c_4th/ch_2__cpp_programming_basics/charvars.cpp
        TICPP_VOL1/ch_2/StreamTICPP.cpp
        TICPP_VOL1/ch_2/headers/StreamTICPP.h
        TICPP_VOL1/ch_2/HelloStringsTICPP.cpp
        TICPP_VOL1/ch_2/headers/HelloStringsTICPP.h
        TICPP_VOL1/ch_2/ScopyTICPP.cpp
        TICPP_VOL1/ch_2/headers/ScopyTICPP.h
        TICPP_VOL1/ch_2/FillStringTICPP.cpp
        TICPP_VOL1/ch_2/headers/FillStringTICPP.h
        TICPP_VOL1/ch_2/FillVectorTICPP.cpp
        TICPP_VOL1/ch_2/headers/FillVectorTICPP.h
        TICPP_VOL1/ch_2/GetWordsTICPP.cpp
        TICPP_VOL1/ch_2/headers/GetWordsTICPP.h
        TICPP_VOL1/ch_2/IntVectorTICPP.cpp
        TICPP_VOL1/ch_2/headers/IntVectorTICPP.h
        notes/server_winsock.cpp
        notes/server_winsock.h
        TICPP_VOL1/ch_3/MenuTICPP.cpp
        TICPP_VOL1/ch_3/headers/MenuTICPP.h
        TICPP_VOL1/ch_3/Menu2TICPP.cpp
        TICPP_VOL1/ch_3/headers/Menu2TICPP.h
        TICPP_VOL1/ch_3/CatsInHatsTICPP.cpp
        TICPP_VOL1/ch_3/headers/CatsInHatsTICPP.h
        TICPP_VOL1/ch_3/SpecifyTICPP.cpp
        TICPP_VOL1/ch_3/headers/SpecifyTICPP.h
        TICPP_VOL1/ch_3/PassByValueTICPP.cpp
        TICPP_VOL1/ch_3/headers/PassByValueTICPP.h
        TICPP_VOL1/ch_3/PassByAddressTICPP.cpp
        TICPP_VOL1/ch_3/headers/PassByAddressTICPP.h
        TICPP_VOL1/ch_3/PassByReferenceTICPP.cpp
        TICPP_VOL1/ch_3/headers/PassByReferenceTICPP.h
        TICPP_VOL1/ch_3/VoidPointerTICPP.cpp
        TICPP_VOL1/ch_3/headers/VoidPointerTICPP.h
        TICPP_VOL1/ch_3/MathopsTICPP.cpp
        TICPP_VOL1/ch_3/headers/MathopsTICPP.h
        TICPP_VOL1/ch_3/printBinaryTICPP.cpp
        TICPP_VOL1/ch_3/headers/printBinaryTICPP.h
        TICPP_VOL1/ch_3/BitwiseTICPP.cpp
        TICPP_VOL1/ch_3/headers/BitwiseTICPP.h
        TICPP_VOL1/ch_3/StaticCastTICPP.cpp
        TICPP_VOL1/ch_3/headers/StaticCastTICPP.h
        TICPP_VOL1/ch_3/ReinterpretCastTICPP.cpp
        TICPP_VOL1/ch_3/headers/ReinterpretCastTICPP.h
        TICPP_VOL1/ch_3/SimpleStructTICPP.cpp
        TICPP_VOL1/ch_3/headers/SimpleStructTICPP.h
        TICPP_VOL1/ch_3/ArraysIntroTICPP.cpp
        TICPP_VOL1/ch_3/headers/ArraysIntroTICPP.h)

target_link_libraries(cpp_playground_2 PRIVATE ws2_32)