/*
//Using Sieve of Eratosthenes algorithm
//http://www.geeksforgeeks.org/sieve-of-eratosthenes/
*/
#include <iostream>
#include <vector>

void PrimeGenerator(size_t lowerLimit, size_t higherLimit)
{
	std::vector<bool> prime((higherLimit - lowerLimit) + 1, true);

	for (auto i = lowerLimit; i < higherLimit; ++i)
	{
		for (auto j = i; j <=)
	}

}

int main()
{
	int noOfCases;
	size_t lowerLimit, higherLimit;

	std::cin >> noOfCases;

	while (noOfCases <= 10)
	{
		std::cin >> lowerLimit >> higherLimit;

		PrimeGenerator(lowerLimit, higherLimit);
	}
}