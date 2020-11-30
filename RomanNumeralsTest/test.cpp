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

TEST(RomanNumerals, tripleDigits) {
	EXPECT_EQ("C", RomanNumerals::convertFromInteger(100));
	EXPECT_EQ("CI", RomanNumerals::convertFromInteger(101));
	EXPECT_EQ("CCXXII", RomanNumerals::convertFromInteger(222));
	EXPECT_EQ("CCCXXXIII", RomanNumerals::convertFromInteger(333));
	EXPECT_EQ("CDXLIV", RomanNumerals::convertFromInteger(444));
	EXPECT_EQ("DLV", RomanNumerals::convertFromInteger(555));
	EXPECT_EQ("DCLXVI", RomanNumerals::convertFromInteger(666));
	EXPECT_EQ("DCCLXXVII", RomanNumerals::convertFromInteger(777));
	EXPECT_EQ("DCCCLXXXVIII", RomanNumerals::convertFromInteger(888));
	EXPECT_EQ("CMXCIX", RomanNumerals::convertFromInteger(999));
}

TEST(RomanNumerals, QuadDigits) {
	EXPECT_EQ("MI", RomanNumerals::convertFromInteger(1001));
	EXPECT_EQ("MDCCLXXVII", RomanNumerals::convertFromInteger(1777));
	EXPECT_EQ("MMDCCCLXXXVIII", RomanNumerals::convertFromInteger(2888));
	EXPECT_EQ("MMMCMXCIX", RomanNumerals::convertFromInteger(3999));
}








