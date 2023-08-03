#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int solution(int n)
{
	int sumOfDivisors = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			sumOfDivisors += i;
	}
	return sumOfDivisors;

}


int main()
{
	cout << solution(12) << endl;
	cout << solution(5) << endl;



	return 0;
}