#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

vector<int> solution(long long n)
{
	vector<int> answer;
	while (n)
	{
		answer.push_back(n % 10);
		n /= 10;
	}
	return answer;
}

int main()
{
	solution(12345);


	return 0;
}