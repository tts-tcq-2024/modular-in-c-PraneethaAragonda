// color_pair_tests.h
#ifndef COLOR_PAIR_TESTS_H
#define COLOR_PAIR_TESTS_H

#include "color_pair.h"

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor,
                      enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor,
                      int expectedPairNumber);

#endif // COLOR_PAIR_TESTS_H
