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

public:
	static std::string convertFromInteger(int number) {
		std::string romanNumeral{ "" };

		int units = number % 10;
		int tens = ((number % 100) - units) / 10;
		int hundreds = ((number % 1000) - tens*10 -units) / 100;
		int thousands = ((number % 10000) - hundreds*100 - tens * 10 - units) / 1000;

		romanNumeral.append(thousandsAsString[thousands]);
		romanNumeral.append(hundredsAsString[hundreds]);
		romanNumeral.append(tensAsString[tens]);
		romanNumeral.append(unitsAsString[units]);

		return romanNumeral;
	}
};

const std::vector<std::string> RomanNumerals::thousandsAsString{ "", "M", "MM", "MMM" };
const std::vector<std::string> RomanNumerals::hundredsAsString{ "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
const std::vector<std::string> RomanNumerals::tensAsString{ "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
const std::vector<std::string> RomanNumerals::unitsAsString{ "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };

