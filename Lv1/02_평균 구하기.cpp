#include <iostream>
#include <vector>	
#include <numeric>
#include <functional>
using namespace std;

double solution(vector<int> arr)
{
	double sum = accumulate(arr.begin(), arr.end(), 0);
	return sum / arr.size();
}

int main()
{
	cout << solution({ 1,2,3,4 }) << endl;

	vector<int>v{1, 2, 3};
	// accumulate(first pointer, last+1 pointer, initial value, custom function)
	cout << accumulate(v.begin(), v.end(), 1, [](int x, int y){ return x * y; }) << endl;
	cout << accumulate(v.begin(), v.end(), 1, multiplies<int>()) << endl; // std::multiples
	cout << accumulate(v.begin(), v.end(), 0, minus<int>()) << endl; // functional::multiples
	
	return 0;
}