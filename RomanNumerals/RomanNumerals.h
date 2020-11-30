#pragma once
#include <string>
#include <vector>

static std::string unitsDigit(int digit)
{
	std::vector<std::string> unitsAsString{ "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
	return unitsAsString[digit];
}

static std::string tensDigit(int digit)
{
	std::vector<std::string> tensAsString{ "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
	return tensAsString[digit];
}

static std::string hundredsDigit(int digit)
{
	std::vector<std::string> hundredsAsString{ "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
	return hundredsAsString[digit];
}

static std::string thousandsDigit(int digit)
{
	std::vector<std::string> thousandsAsString{ "", "M", "MM", "MMM" };
	return thousandsAsString[digit];
}

class RomanNumerals
{
public:
	static std::string convertFromInteger(int number) {
		std::string romanNumeral{ "" };

		int units = number % 10;
		int tens = ((number % 100) - units) / 10;
		int hundreds = ((number % 1000) - tens*10 -units) / 100;
		int thousands = ((number % 10000) - hundreds*100 - tens * 10 - units) / 1000;

		romanNumeral.append(thousandsDigit(thousands));
		romanNumeral.append(hundredsDigit(hundreds));
		romanNumeral.append(tensDigit(tens));
		romanNumeral.append(unitsDigit(units));

		return romanNumeral;
	}
};

