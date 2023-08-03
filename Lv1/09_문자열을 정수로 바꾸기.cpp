#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;


int solution(string s)
{
	return stoi(s);
}

int solution2(string s)
{
	int number = 0;
	int sign = 1;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			number *= 10;
			number += (s[i] - 48);
		}
		else if (s[i] == '-')
			sign = -1;
	}
	return sign * number;
}

int main()
{
	cout << solution("1234") << endl;
	cout << solution2("-1234") << endl;

}