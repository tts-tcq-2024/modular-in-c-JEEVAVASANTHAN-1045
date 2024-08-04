#include <stdio.h>
#include <assert.h>
#include "String_converter_from_colourpair.h"
#include "color_from_pair_number_identifier.h"
#include "pair_from_number.h"

void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}
