#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

long long solution(int a, int b)
{
	long long sum = 0;
	for (int i = min(a, b); i <= max(a, b); i++)
		sum += i;

	return sum;
}

// Sigma 
long long solution2(int a, int b)
{
	return (static_cast<long long>(a) + b) * (static_cast<long long>(abs(a - b)) + 1) / 2;
}

int main()
{
	cout << solution(3, 3) << endl;
	cout << solution2(3, 5) << endl;


	return 0;
}