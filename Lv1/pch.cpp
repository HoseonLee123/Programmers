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

