#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;


long long solution(long long n)
{
	long long i;

	for (i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
			return (i + 1) * (i + 1);
	}

	return -1;
}

long long solution2(long long n)
{
	if (sqrt(n) == floor(sqrt(n)))
		return pow(sqrt(n) + 1, 2);
	else
		return -1;
}

int main()
{
	cout << solution2(121) << endl;
	cout << solution2(5) << endl;
	return 0;
}