#include <iostream>
#include <string>
using namespace std;

int solution(int n)
{
	int sum = 0;
	int quotient;
	int remainder;
	while (true)
	{
		quotient = n / 10;
		remainder = n % 10;
		sum += remainder;
		n = quotient;
		if (quotient == 0)
			break;
	}
	return sum;
}

int solution2(int n)
{
	int sum = 0;

	string s = to_string(n);
	for (int i = 0; i < s.length(); i++)
	{
		sum += s[i] - '0';
	}

	return sum;
}


int main()
{
	cout << solution(987) << endl;
	cout << solution2(987) << endl;

	return 0;
}