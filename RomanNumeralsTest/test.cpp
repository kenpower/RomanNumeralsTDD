#include "pch.h"
#include "../RomanNumerals/RomanNumerals.h"


TEST(RomanNumerals, RomanNumerals_1) {
  EXPECT_EQ("I", RomanNumerals::convertFromInteger(1));
}

TEST(RomanNumerals, singleDigit) {
	EXPECT_EQ("II",   RomanNumerals::convertFromInteger(2));
	EXPECT_EQ("III",  RomanNumerals::convertFromInteger(3));
	EXPECT_EQ("IV",   RomanNumerals::convertFromInteger(4));
	EXPECT_EQ("V",    RomanNumerals::convertFromInteger(5));
	EXPECT_EQ("VI",   RomanNumerals::convertFromInteger(6));
	EXPECT_EQ("VII",  RomanNumerals::convertFromInteger(7));
	EXPECT_EQ("VIII", RomanNumerals::convertFromInteger(8));
	EXPECT_EQ("IX",   RomanNumerals::convertFromInteger(9));
}
TEST(RomanNumerals, doubleDigits) {
	EXPECT_EQ("X",        RomanNumerals::convertFromInteger(10));
	EXPECT_EQ("XI",       RomanNumerals::convertFromInteger(11));
	EXPECT_EQ("XXII",     RomanNumerals::convertFromInteger(22));
	EXPECT_EQ("XXXIII",   RomanNumerals::convertFromInteger(33));
	EXPECT_EQ("XLIV",     RomanNumerals::convertFromInteger(44));
	EXPECT_EQ("LV",       RomanNumerals::convertFromInteger(55));
	EXPECT_EQ("LXVI",     RomanNumerals::convertFromInteger(66));
	EXPECT_EQ("LXXVII",   RomanNumerals::convertFromInteger(77));
	EXPECT_EQ("LXXXVIII", RomanNumerals::convertFromInteger(88));
	EXPECT_EQ("XCIX",     RomanNumerals::convertFromInteger(99));
}
