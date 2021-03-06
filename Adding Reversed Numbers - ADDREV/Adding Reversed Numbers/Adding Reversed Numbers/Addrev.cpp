#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

int reverse(int number);

int main()
{
	int noOfInputs, value1, value2, revValue1, revValue2, sum, revSum;
	
	cin >> noOfInputs;
	for (auto i = 0; i < noOfInputs; ++i)
	{
		istream_iterator<int> inputStream(cin); //stdin iterator
		istream_iterator<int> eos; //end-of-stream iterator
		if (eos != inputStream)
			value1 = *inputStream;
		++inputStream;
		if (eos != inputStream)
			value2 = *inputStream;

		revValue1 = reverse(value1);
		revValue2 = reverse(value2);
		sum = revValue1 + revValue2;
		revSum = reverse(sum);
		cout << revSum << "\n";
	}
	return 0;
}

int reverse(int number)
{
	int sum = 0, remainder;
	
	while (number != 0)
	{
		remainder = number % 10;
		sum = (sum*10) + remainder;
		number = number / 10;
	}
	return sum;
}