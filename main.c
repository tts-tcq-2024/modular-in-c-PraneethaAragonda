// main.c
#include "color_pair_tests.c"

int main() {
    testNumberToPair(4, WHITE, BROWN);     // Should correspond to White and Brown
    testNumberToPair(5, WHITE, SLATE);     // Should correspond to White and Slate

    testPairToNumber(BLACK, ORANGE, 12);   // Black and Orange should correspond to Pair 12
    testPairToNumber(VIOLET, SLATE, 25);    // Violet and Slate should correspond to Pair 25

    return 0;
}
