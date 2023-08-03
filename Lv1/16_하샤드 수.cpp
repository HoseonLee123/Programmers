#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

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

bool solution(int x)
{
	int sumOfDigits = solution2(x);
	return x % sumOfDigits == 0;
	//if (x % sumOfDigits == 0)
	//	return true;
	//else
	//	return false;
}


int main()
{
	cout << solution(10) << endl;
	cout << solution(11) << endl;
	cout << solution(12) << endl;





	return 0;
}