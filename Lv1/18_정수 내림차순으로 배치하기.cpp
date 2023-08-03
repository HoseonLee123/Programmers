#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

vector<int> DivideDigits(long long n)
{
	vector<int> v;

	string s = to_string(n);
	for (int i = 0; i < s.length(); i++)
	{
		v.push_back(s[i] - '0');
	}

	return v;
}

long long solution(long long n)
{
	vector<int> v;
	v = DivideDigits(n);
	sort(v.begin(), v.end(), greater<int>());

	long long answer = 0;
	int increaseDigit = 1;
	for (auto reverseIt = v.rbegin(); reverseIt != v.rend(); reverseIt++)
	{
		answer += ((*reverseIt) * increaseDigit);
		increaseDigit *= 10;
	}
	return answer;
}

long long solution2(long long n)
{
	string str = to_string(n);
	sort(str.begin(), str.end(), greater<char>());
	
	return stoll(str);
}

int main()
{
	cout << solution(12345) << endl;
	cout << solution2(12345) << endl;

	return 0;
}