#pragma once
#include <string>
#include <vector>

class RomanNumerals
{
private:
	static const std::vector<std::string> unitsAsString;
	static const std::vector<std::string> tensAsString;
	static const std::vector<std::string> hundredsAsString;
	static const std::vector<std::string> thousandsAsString;

	static enum DigitRank { UNITS = 0, TENS = 1, HUNDREDS = 2, THOUSANDS =3, END};

	static int shiftRight(int number) {
		int rightDigit = number % 10;
		return (number - rightDigit) / 10;
	}

	static int getNthDigit(int number, int rank) {
		for (int i = 0; i < rank; i++) {
			number = shiftRight(number);
		}

		return number % 10;
	}

	static std::string digitAsRomanString(int digit, int rank) {
		switch (rank) {
		case DigitRank::UNITS:
			return unitsAsString[digit];
		case DigitRank::TENS:
			return tensAsString[digit];
		case DigitRank::HUNDREDS:
			return hundredsAsString[digit];
		case DigitRank::THOUSANDS:
			return thousandsAsString[digit];
		default:
			return "";
		}
	}


public:
	static std::string convertFromInteger(int number) {
		std::string romanNumeral{ "" };

		for (int rank = DigitRank::UNITS; rank != DigitRank::END; rank++) {
			romanNumeral =  digitAsRomanString(getNthDigit(number, rank), rank) + romanNumeral;
		}

		return romanNumeral;
	}
};

const std::vector<std::string> RomanNumerals::thousandsAsString{ "", "M", "MM", "MMM" };
const std::vector<std::string> RomanNumerals::hundredsAsString{ "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
const std::vector<std::string> RomanNumerals::tensAsString{ "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
const std::vector<std::string> RomanNumerals::unitsAsString{ "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };

