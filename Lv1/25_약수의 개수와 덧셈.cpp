#include "pch.h"

int CheckNumberOfDivisors(int number)
{
	vector<int> numberOfDivisors;
	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
			numberOfDivisors.push_back(i);
	}

	if (numberOfDivisors.size() % 2 == 0)
		return number;
	else
		return (number * (-1));
}

int solution(int left, int right)
{
	int sum = 0;
	for (left; left <= right; left++)
	{
		sum += CheckNumberOfDivisors(left);
	}

	return sum;
}


int main()
{
	cout << solution(13, 17) << endl;
	cout << solution(24, 27) << endl;



	return 0;
}