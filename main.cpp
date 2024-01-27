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

int main() {
    // Chapter 2
    testStreamTICPP();
    testHelloStringsTICPP();
    testScopyTICPP();
    testFillStringTICPP();
    testFillVectorTICPP();
    testGetWordsTICPP();
    testIntVectorTICPP();

    // Chapter 3
//    testMenuTICPP();
//    testMenu2TICPP();
    removeHat('A');
    demoSpecifyTICPP();
    passByValueDemo();
    passByAddressDemo();
    passByReferenceDemo();
//    mathOpsDemo();
//    printBinaryDemo(255);
//    bitwiseDemoTICPP();
    reinterpretCastDemo();
    return 0;
}
