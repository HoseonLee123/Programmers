#include "pch.h"

string solution(string s)
{
	string answer;
	if (s.size() % 2 == 1)
		answer = s[(s.size() - 1) / 2];
	else
		answer = s.substr(s.size() / 2 - 1, 2);

	return answer;
}


int main()
{
	cout << solution("abcdefgh") << endl;


	return 0;
}