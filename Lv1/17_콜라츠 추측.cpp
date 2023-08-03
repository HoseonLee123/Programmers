#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int solution(long long num)
{
	if (num == 1)
		return 0;

	int count = 0;
	while (num != 1)
	{
		if (num % 2 == 0)
		{
			num /= 2;
			count++;
		}
		else
		{
			num = num * 3 + 1;
			count++;
		}

		if (count == 500)
			return -1;
	}

	return count;
}


int main()
{
	cout << solution(6) << endl;
	cout << solution(626331) << endl;


	return 0;
}