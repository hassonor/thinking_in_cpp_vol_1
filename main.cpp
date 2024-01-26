#include "TICPP_VOL1/ch_2/headers/Stream_TICPP.h"
#include "TICPP_VOL1/ch_2/headers/HelloStrings_TICPP.h"
#include "TICPP_VOL1/ch_2/headers/Scopy_TICPP.h"
#include "TICPP_VOL1/ch_2/headers/FillString_TICPP.h"
#include "TICPP_VOL1/ch_2/headers/FillVector_TICPP.h"
#include "TICPP_VOL1/ch_2/headers/GetWords_TICPP.h"
#include "TICPP_VOL1/ch_2/headers/IntVector_TICPP.h"
#include "notes/server_winsock.h"
#include "TICPP_VOL1/ch_3/headers/Menu_TICPP.h"
#include "TICPP_VOL1/ch_3/headers/Menu2_TICPP.h"
#include "TICPP_VOL1/ch_3/headers/CatsInHats_TICPP.h"
#include "TICPP_VOL1/ch_3/headers/Specify_TICPP.h"
#include "TICPP_VOL1/ch_3/headers/PassByValue_TICPP.h"
#include "TICPP_VOL1/ch_3/headers/PassByAddress_TICPP.h"

int main() {
    // Chapter 2
    testStream_TICPP();
    testHelloStrings_TICPP();
    testScopy_TICPP();
    testFillString_TICPP();
    testFillVector_TICPP();
    testGetWords_TICPP();
    testIntVector_TICPP();

    // Chapter 3
//    testMenu_TICPP();
//    testMenu2_TICPP();
    removeHat('A');
    demoSpecify_TICPP();
    passByValueDemo();
    passByAddressDemo();
    return 0;
}
