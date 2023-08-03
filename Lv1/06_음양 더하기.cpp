#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int solution(vector<int> absolutes, vector<bool> signs)
{
	auto abIt = absolutes.begin();
	auto sgIt = signs.begin();

	int sum = 0;

	for (abIt; abIt != absolutes.end(); ++abIt, ++sgIt)
	{
		if (*sgIt == true)
			sum += *abIt;
		else
			sum += (*abIt) * (-1);
	}
	
	return sum;
}


int main()
{
	cout << solution({ 4, 7, 12 }, { true, false, true }) << endl;



	return 0;
}