cmake_minimum_required(VERSION 3.27)
project(cpp_playground_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_playground_2 main.cpp
        oop_programming_c_4th/ch_2__cpp_programming_basics/charvars.cpp
        TICPP_VOL1/ch_2/Stream_TICPP.cpp
        TICPP_VOL1/ch_2/headers/Stream_TICPP.h
        TICPP_VOL1/ch_2/HelloStrings_TICPP.cpp
        TICPP_VOL1/ch_2/headers/HelloStrings_TICPP.h
        TICPP_VOL1/ch_2/Scopy_TICPP.cpp
        TICPP_VOL1/ch_2/headers/Scopy_TICPP.h
        TICPP_VOL1/ch_2/FillString_TICPP.cpp
        TICPP_VOL1/ch_2/headers/FillString_TICPP.h
        TICPP_VOL1/ch_2/FillVector_TICPP.cpp
        TICPP_VOL1/ch_2/headers/FillVector_TICPP.h
        TICPP_VOL1/ch_2/GetWords_TICPP.cpp
        TICPP_VOL1/ch_2/headers/GetWords_TICPP.h
        TICPP_VOL1/ch_2/IntVector_TICPP.cpp
        TICPP_VOL1/ch_2/headers/IntVector_TICPP.h
        notes/server_winsock.cpp
        notes/server_winsock.h
        TICPP_VOL1/ch_3/Menu_TICPP.cpp
        TICPP_VOL1/ch_3/headers/Menu_TICPP.h
        TICPP_VOL1/ch_3/Menu2_TICPP.cpp
        TICPP_VOL1/ch_3/headers/Menu2_TICPP.h)

target_link_libraries(cpp_playground_2 PRIVATE ws2_32)