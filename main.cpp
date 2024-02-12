#include "TICPP_VOL1/ch_2/headers/StreamTICPP.h"
#include "TICPP_VOL1/ch_2/headers/HelloStringsTICPP.h"
#include "TICPP_VOL1/ch_2/headers/ScopyTICPP.h"
#include "TICPP_VOL1/ch_2/headers/FillStringTICPP.h"
#include "TICPP_VOL1/ch_2/headers/FillVectorTICPP.h"
#include "TICPP_VOL1/ch_2/headers/GetWordsTICPP.h"
#include "TICPP_VOL1/ch_2/headers/IntVectorTICPP.h"
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
#include "TICPP_VOL1/ch_5/headers/HandleDemoTICPP.h"
#include "TICPP_VOL1/ch_6/headers/Stash2Ch6.h"
#include "TICPP_VOL1/ch_6/headers/StackCh6.h"
#include "TICPP_VOL1/ch_6/headers/MultiArgsDemo.h"
#include "TICPP_VOL1/ch_11/headers/FreeStandingReferences.h"
#include "TICPP_VOL1/ch_11/headers/HowMany2Demo.h"
#include "TICPP_VOL1/ch_11/headers/ReferenceDemo.h"
#include "TICPP_VOL1/ch_11/headers/DefaultCopyConstructor.h"
#include "TICPP_VOL1/ch_11/headers/PointerToMemberData.h"
#include "TICPP_VOL1/ch_13/headers/Tree2Demo.h"
#include "TICPP_VOL1/ch_13/headers/MallocClassDemo.h"
#include "TICPP_VOL1/ch_13/headers/PStash.h"
#include "TICPP_VOL1/ch_14/headers/NameHiding.h"
#include "TICPP_VOL1/ch_14/headers/StringStack.h"
#include "TICPP_VOL1/ch_14/headers/GameBoardDemo.h"
#include "TICPP_VOL1/classEx/headers/StackC1.h"
#include "TICPP_VOL1/ch_14/headers/FName1.h"
#include "TICPP_VOL1/ch_14/headers/PrivateInheritance.h"
#include "TICPP_VOL1/ch_14/headers/ProtectedDemo.h"
#include "TICPP_VOL1/ch_14/headers/ByteDemo.h"
#include "TICPP_VOL1/ch_14/headers/CopyConstructorDemo.h"


int main() {
/*
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
    testMenuTICPP(); // 3.1
    testMenu2TICPP(); // 3.2
    removeHat('A'); // 3.3
    demoSpecifyTICPP(); // 3.4
    passByValueDemo(); // 3.5
    passByAddressDemo(); // 3.6
    passByReferenceDemo(); // 3.7
//    mathOpsDemo(); // 3.8
    printBinaryDemo(255); // 3.9
    bitwiseDemoTICPP(); // 3.10
    reinterpretCastDemo(); // 3.11
    simpleStructDemo(); // 3.12
    arraysIntroDemoTICPP(); // 3.13
    pointerIncrementDemo1(); // 3.14
    pointerIncrementDemo2(); // 3.15
    pointerArithmeticDemo(); // 3.16
    PointerToFunctionDemo(); // 3.17
    functionTableDemo(); // 3.18

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
    useHandleTest(); // 5.7

    // TICPP: Chapter 6 - Initialization & Cleanup
    testStash2Ch6(); // 6.1
    testStackCh6(); // 6.2
    testMultiArgs(); // 6.3

    // TICPP: Chapter 11 - References & the Copy-Constructor
    FreeStandingReferencesDemo(); // 11.1
    referenceDemoRun(); // 11.2
    testHowMany2Demo(); // 11.3
    testComposite(); // 11.4
    testDataClass(); // 11.5

    // TICPP: Chapter 13 - Dynamic Object Creation
    testObjMDemo(); // 13.1
    tree2Demo(); // 13.2
    testPStash(); // 13.3

    // TICPP: Chapter 14 - Inheritance & Composition
    testNameHiding(); // 14.1
    testStringStack(); // 14.2
    testGameBoardDemo(); // 14.3
    testFName1(); // 14.4
    testPrivateInheritance(); // 14.5
    protectedExampleDemo(); // 14.6
    testByteDemo(); // 14.7
        */
    testCCUpCastingDemo(); // 14.8

    // Class Examples
    testStackC1();

    return 0;
}
