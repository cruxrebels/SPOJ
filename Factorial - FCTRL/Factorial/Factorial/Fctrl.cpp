#include <iostream>
#include <math.h>

unsigned long trailingZeroes(unsigned long input)
{
	unsigned long sum = 0, quotient = 1, divider = 5;
	while (quotient != 0)
	{
		quotient = floor(input/divider);
		sum = sum + quotient;
		divider *= 5;
	}
	return sum;
};

int main()
{
	unsigned long noOfCases;
	unsigned long input;

	std::cin >> noOfCases;
	for (size_t i = 0; i < noOfCases; ++i)
	{
		std::cin >> input;
		std::cout << trailingZeroes(input) << "\n";
	}
	return 0;
}