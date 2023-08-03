#include "pch.h"

vector<int> solution(vector<int> arr)
{
	vector<int> answer;

	int jump = 1;

	for (int i = 0; i < arr.size(); i+=jump)
	{
		answer.push_back(arr[i]);

		jump = 1;
		while (i+jump < arr.size())
		{
			if (arr[i] == arr[i + jump])
				jump++;
			else
				break;
		}
	}

	return answer;
}

vector<int> solution2(vector<int> arr)
{
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	vector<int> answer = arr;

	return answer;
}

int main()
{
	PrintVector(solution({ 1,1,3,3,0,1,1 }));
	PrintVector(solution2({ 4, 4, 4, 3, 3 }));

	return 0;
}