#include "pch.h"

int solution(vector<int> number)
{
	int sum{ 0 };
	int trio{ 0 };
	int numberOfTrio{ 0 };

	for (size_t i = 0; i < (number.size() - 2); ++i)
	{
		for (size_t j = i + 1; j < number.size() - 1; ++j)
		{
			for (size_t k = j + 1; k < number.size(); ++k)
			{
				if (number[i] + number[j] + number[k] == trio)
					++numberOfTrio;
			}
		}
	}

	return numberOfTrio;
}



int main()
{
	cout << solution({ -3, -2, -1, 0, 1, 2, 3 }) << endl;


	return 0;
}