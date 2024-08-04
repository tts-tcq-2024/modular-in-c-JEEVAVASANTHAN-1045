#include <stdio.h>
#include "String_converter_from_colourpair.h"
#include "types_of_colour_code.h"
void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
            MajorColorNames[colorPair->majorColor],
            MinorColorNames[colorPair->minorColor]);
}
