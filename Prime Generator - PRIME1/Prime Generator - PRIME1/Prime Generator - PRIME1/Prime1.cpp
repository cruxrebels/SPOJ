/*
//Using Sieve of Eratosthenes algorithm
//http://www.geeksforgeeks.org/sieve-of-eratosthenes/
*/
#include <iostream>
#include <vector>

void PrimeGenerator(size_t lowerLimit, size_t higherLimit)
{
	std::vector<bool> prime((higherLimit - lowerLimit) + 1, true);

	for (auto i = lowerLimit; i*i <= higherLimit; ++i)
	{
		if (prime[i] == true)
		{
			for (auto j = 2*i; j <= higherLimit; j += i)
				prime[j] = false;
		}		
	}

	for (const auto& p : prime)
	{
		if (prime[p])
			std::cout << p << std::endl;
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