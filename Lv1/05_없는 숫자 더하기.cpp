#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int solution(vector<int> numbers)
{
	return 45 - accumulate(numbers.begin(), numbers.end(), 0);
}


int main()
{
	cout << solution({ 1, 2, 3, 4, 6, 7, 8, 0 }) << endl;


	return 0;
}