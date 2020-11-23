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

class RomanNumerals
{
public:
	static std::string convertFromInteger(int number) {
		std::string romanNumeral{ "" };

		int units = number % 10;
		int tens = ((number % 100) - units)/10;

		romanNumeral.append(unitsDigit(units));
		romanNumeral.append(tensDigit(tens));

		return romanNumeral;
	}
};

