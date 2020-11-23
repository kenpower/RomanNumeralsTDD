#pragma once
#include <string>
static std::string unitsDigit(int digit)
{
	switch (digit) {
	case 0:
		return "";
		break;
	case 1:
		return "I";
		break;
	case 2:
		return "II";
		break;
	case 3:
		return "III";
		break;
	case 4:
		return "IV";
		break;
	case 5:
		return "V";
		break;
	case 6:
		return "VI";
		break;
	case 7:
		return "VII";
		break;
	case 8:
		return "VIII";
		break;
	case 9:
		return "IX";
		break;
	}
}

static std::string tensDigit(int digit)
{
	switch (digit) {
	case 0:
		return "";
		break;
	case 1:
		return "X";
		break;
	case 2:
		return "XX";
		break;
	case 3:
		return "XXX";
		break;
	case 4:
		return "XL";
		break;
	case 5:
		return "L";
		break;
	case 6:
		return "LX";
		break;
	case 7:
		return "LXX";
		break;
	case 8:
		return "LXXX";
		break;
	case 9:
		return "XC";
		break;
	}
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

