#include <stdio.h>
#include <assert.h>
#include "pairnumber_finder_fromcolour.h"
#include "pairtonumber_verification.h"

void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
