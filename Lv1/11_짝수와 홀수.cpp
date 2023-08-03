#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

string solution(int num)
{
	if (num % 2 == 0)
		return "Even";
	else
		return "Odd";
}


int main()
{
	cout << solution(3) << endl;
	cout << solution(4) << endl;


	return 0;
}