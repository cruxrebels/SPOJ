#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> input;
	int x;
	vector<int>::const_iterator it;
	while (cin >> x && x != 42)
	{
		input.emplace_back(x);
	}
	for (it = input.cbegin(); it != input.cend(); ++it)
	{
		cout << *it << endl;
	}
	return 0;
}
