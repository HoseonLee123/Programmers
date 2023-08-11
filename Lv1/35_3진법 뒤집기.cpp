#include "pch.h"

int solution(int n)
{
	// 10 -> 3
	string ternary = "";
	while (true)
	{
		if (n % 3 == 0)
			ternary = "0" + ternary;
		else if(n%3 == 1)
			ternary = "1" + ternary;
		else if (n % 3 == 2)
			ternary = "2" + ternary;

		n /= 3;

		if (n == 0)
			break;
	}

	// reverse & 3 -> 10
	int answer = 0;
	for (int exponent = 0; exponent < ternary.size(); exponent++)
	{
		answer += (ternary[exponent] - '0') * pow(3, exponent);
	}

	return answer;
}

int main()
{
	cout << solution(45) << endl;
}