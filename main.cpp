#include "TICPP_VOL1/ch_2/headers/StreamTICPP.h"
#include "TICPP_VOL1/ch_2/headers/HelloStringsTICPP.h"
#include "TICPP_VOL1/ch_2/headers/ScopyTICPP.h"
#include "TICPP_VOL1/ch_2/headers/FillStringTICPP.h"
#include "TICPP_VOL1/ch_2/headers/FillVectorTICPP.h"
#include "TICPP_VOL1/ch_2/headers/GetWordsTICPP.h"
#include "TICPP_VOL1/ch_2/headers/IntVectorTICPP.h"
#include "notes/server_winsock.h"
#include "TICPP_VOL1/ch_3/headers/MenuTICPP.h"
#include "TICPP_VOL1/ch_3/headers/Menu2TICPP.h"
#include "TICPP_VOL1/ch_3/headers/CatsInHatsTICPP.h"
#include "TICPP_VOL1/ch_3/headers/SpecifyTICPP.h"
#include "TICPP_VOL1/ch_3/headers/PassByValueTICPP.h"
#include "TICPP_VOL1/ch_3/headers/PassByAddressTICPP.h"
#include "TICPP_VOL1/ch_3/headers/PassByReferenceTICPP.h"
#include "TICPP_VOL1/ch_3/headers/MathopsTICPP.h"
#include "TICPP_VOL1/ch_3/headers/printBinaryTICPP.h"
#include "TICPP_VOL1/ch_3/headers/BitwiseTICPP.h"
#include "TICPP_VOL1/ch_3/headers/ReinterpretCastTICPP.h"
#include "TICPP_VOL1/ch_3/headers/SimpleStructTICPP.h"
#include "TICPP_VOL1/ch_3/headers/ArraysIntroTICPP.h"
#include "TICPP_VOL1/ch_3/headers/PointerIncrementTICPP.h"
#include "TICPP_VOL1/ch_3/headers/PointerArithmeticTICPP.h"
#include "TICPP_VOL1/ch_3/headers/PointerToFunctionTICPP.h"
#include "TICPP_VOL1/ch_3/headers/FunctionTableTICPP.h"
#include "TICPP_VOL1/ch_4/headers/ClibDemoTICPP.h"
#include "TICPP_VOL1/ch_4/headers/Clib2DemoTICPP.h"
#include "TICPP_VOL1/ch_4/headers/SizeOfStructTICPP.h"
#include "TICPP_VOL1/ch_4/headers/StackNestedTICPP.h"
#include "TICPP_VOL1/ch_5/headers/PublicStructTICPP.h"
#include "TICPP_VOL1/ch_5/headers/PrivateStructTICPP.h"
#include "TICPP_VOL1/ch_5/headers/FriendStructTICPP.h"
#include "TICPP_VOL1/ch_5/headers/NestedFriendTICPP.h"
#include "TICPP_VOL1/ch_5/headers/ClassDemoTICPP.h"
#include "TICPP_VOL1/ch_5/headers/StashClassTICPP.h"


int main() {

    // Test WinSock Server
//    testWinSocketDemo();

    // TICPP: Chapter 2 - Making & Using Objects
    testStreamTICPP();
    testHelloStringsTICPP();
    testScopyTICPP();
    testFillStringTICPP();
    testFillVectorTICPP();
    testGetWordsTICPP();
    testIntVectorTICPP();

    // TICPP: Chapter 3 - The C in C++
//    testMenuTICPP(); // 3.1
//    testMenu2TICPP(); // 3.2
    removeHat('A'); // 3.3
    demoSpecifyTICPP(); // 3.4
    passByValueDemo(); // 3.5
    passByAddressDemo(); // 3.6
    passByReferenceDemo(); // 3.7
//    mathOpsDemo(); // 3.8
//    printBinaryDemo(255); // 3.9
//    bitwiseDemoTICPP(); // 3.10
    reinterpretCastDemo(); // 3.11
    simpleStructDemo(); // 3.12
    arraysIntroDemoTICPP(); // 3.13
    pointerIncrementDemo1(); // 3.14
    pointerIncrementDemo2(); // 3.15
    pointerArithmeticDemo(); // 3.16
    PointerToFunctionDemo(); // 3.17
//    functionTableDemo(); // 3.18

    // TICPP: Chapter 4 - Data Abstraction
    CLibTestTICPP(); // 4.1
    CLib2TestTICPP(); // 4.2
    sizeOfStructDemo(); // 4.3
    stackNestedTest(); // 4.4

    // TICPP: Chapter 5 - Hiding the Implementation
    testPublicStruct(); // 5.1
    testPublicAndPrivateStruct(); // 5.2
    friendStructDemo(); // 5.3
    testNestedFriendDemo(); // 5.4
    classDemoTest(); // 5.5
    StashClassTestTICPP(); // 5.6
    return 0;
}
