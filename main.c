#include <stdio.h>
#include "types_of_colour_code.h"
#include "reference_manual_generator.h"
#include "pair_from_number.h"
#include "pairtonumber_verification.h"

int main() { 
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    const char* reference_manual = generate_reference_manual();  
    printf("%s", reference_manual);     //print if the reference manual is needed
}
