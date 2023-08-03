#include "pch.h"

vector<int> solution(vector<int> arr, int divisor)
{
	vector<int> answer;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] % divisor == 0)
			answer.push_back(arr[i]);
	}

	if (answer.empty())
		return { -1 };

	sort(answer.begin(), answer.end());

	return answer;
}

int main()
{
	solution({ 5, 9, 7, 10 }, 5);



	return 0;
}