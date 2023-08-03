#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;


vector<int> solution(vector<int> arr)
{
	if (arr.size() == 1)
		return { -1 };

	vector<int>::iterator min = arr.begin();
	for (auto arrIt = arr.begin() + 1; arrIt != arr.end(); ++arrIt)
	{
		if (*arrIt < *min)
			min = arrIt;
	}
	arr.erase(min);

	return arr;
}

vector<int> solution2(vector<int> arr)
{
	if (arr.size() == 1)
		return { -1 };

	arr.erase(min_element(arr.begin(), arr.end())); // algorithm

	return arr;
}

int main()
{
	solution2({ 10 });


	return 0;
}