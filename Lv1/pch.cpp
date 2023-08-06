#include "pch.h"

void PrintVector(vector<int> arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (i == arr.size() - 1)
			cout << arr[i] << endl;
		else
			cout << arr[i] << " ";
	}
}

void PrintVector(vector<string> arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (i == arr.size() - 1)
			cout << arr[i] << endl;
		else
			cout << arr[i] << " ";
	}
}

void PrintVector(vector<vector<int>> arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}