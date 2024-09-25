// color_pair.c
#include <stdio.h>
#include "color_pair.h"

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s", MajorColorNames[colorPair->majorColor],
            MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor = (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors + colorPair->minorColor + 1;
}

// New function to print color code manual
void PrintColorCodeManual() {
    printf("Color Code Manual:\n");
    printf("Pair Number\tMajor Color\tMinor Color\n");
    printf("-----------------------------------------\n");
    for (int major = 0; major < 5; major++) {
        for (int minor = 0; minor < numberOfMinorColors; minor++) {
            ColorPair colorPair = { (enum MajorColor)major, (enum MinorColor)minor };
            int pairNumber = GetPairNumberFromColor(&colorPair);
            printf("%d\t\t%s\t\t%s\n", pairNumber,
                MajorColorNames[major], MinorColorNames[minor]);
        }
    }
}
