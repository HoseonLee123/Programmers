#include "pch.h"


string solution(string s)
{
	sort(s.begin(), s.end(), greater<char>());
	return s;
}

int main()
{
	cout << solution("abcdABCDZ") << endl;

	return 0;
}