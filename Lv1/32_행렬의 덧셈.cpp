#include "pch.h"

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
	vector<vector<int>> answer;
	for (int i = 0; i < arr1.size(); i++)
	{
		vector<int> content;
		for (int j = 0; j < arr1[i].size(); j++)
		{
			int value = arr1[i][j] + arr2[i][j];
			content.push_back(value);
		}
		answer.push_back(content);
	}
	return answer;
}


int main()
{
	PrintVector(solution({ {1,2},{3,4} }, { {5,6},{7,8} }));
	PrintVector(solution({ {1},{2} }, { {3},{4} }));

	return 0;
}