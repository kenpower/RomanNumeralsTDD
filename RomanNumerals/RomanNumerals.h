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

	static int shiftRight(int number) {
		int rightDigit = number % 10;
		return (number - rightDigit) / 10;
	}

	static int getNthDigit(int number, int n) {
		for (int i = 0; i < n; i++) {
			number = shiftRight(number);
		}

		return number % 10;
	}


public:
	static std::string convertFromInteger(int number) {
		std::string romanNumeral{ "" };

		romanNumeral.append(thousandsAsString[getNthDigit(number, 3)]);
		romanNumeral.append(hundredsAsString[getNthDigit(number, 2)]);
		romanNumeral.append(tensAsString[getNthDigit(number, 1)]);
		romanNumeral.append(unitsAsString[getNthDigit(number, 0)]);

		return romanNumeral;
	}
};

const std::vector<std::string> RomanNumerals::thousandsAsString{ "", "M", "MM", "MMM" };
const std::vector<std::string> RomanNumerals::hundredsAsString{ "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
const std::vector<std::string> RomanNumerals::tensAsString{ "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
const std::vector<std::string> RomanNumerals::unitsAsString{ "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };

