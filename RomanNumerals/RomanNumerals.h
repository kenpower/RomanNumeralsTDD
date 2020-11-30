#pragma once
#include <string>
#include <vector>

class SingleDigitToRomanConvertor {
	int digitPlace;
	const std::vector<std::string> numerals;
	SingleDigitToRomanConvertor(int digitPlace, const std::vector<std::string> numerals) :
		digitPlace(digitPlace),
		numerals(numerals) {}

	static int shiftRight(int number) {
		int rightDigit = number % 10;
		return (number - rightDigit) / 10;
	}

	int getDigitInPlace(int number) {
		for (int i = 0; i < digitPlace; i++) {
			number = shiftRight(number);
		}

		return number % 10;
	}

public:
	static SingleDigitToRomanConvertor Thousands;
	static SingleDigitToRomanConvertor Hundreds;
	static SingleDigitToRomanConvertor Tens;
	static SingleDigitToRomanConvertor Units;

	std::string toString(const int number) {
		int digit = getDigitInPlace(number);
		return numerals[digit];
	};
};

SingleDigitToRomanConvertor SingleDigitToRomanConvertor::Thousands(3, { "", "M", "MM", "MMM" });
SingleDigitToRomanConvertor SingleDigitToRomanConvertor::Hundreds(2, { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" });
SingleDigitToRomanConvertor SingleDigitToRomanConvertor::Tens(1, { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" });
SingleDigitToRomanConvertor SingleDigitToRomanConvertor::Units(0, { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" });

class RomanNumerals
{
	static std::vector<SingleDigitToRomanConvertor> convertors;


public:
	static std::string convertFromInteger(int number) {
		std::string romanNumeral{ "" };

		for (SingleDigitToRomanConvertor convertor: convertors) {
			romanNumeral = convertor.toString(number) + romanNumeral;
		}

		return romanNumeral;
	}
};

std::vector<SingleDigitToRomanConvertor> RomanNumerals::convertors{ 
	SingleDigitToRomanConvertor::Units,
	SingleDigitToRomanConvertor::Tens,
	SingleDigitToRomanConvertor::Hundreds,
	SingleDigitToRomanConvertor::Thousands
};

