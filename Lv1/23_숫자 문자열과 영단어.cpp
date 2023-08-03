#include "pch.h"
vector<int> CheckString(char& s);

int solution(string s)
{
	int jump = 0;
	vector<int> check;
	vector<int> result;
	check.reserve(1000);
	result.reserve(1000);
	for (int i = 0; i < s.size(); i += jump)
	{
		jump = 0;

		check = CheckString(s[i]);
		result.push_back(check[0]);
		jump = check[1];
	}

	int answer = 0;
	for (int i = 0; i < result.size(); i++)
	{
		answer += result[i] * static_cast<int>(pow(10, result.size() - 1 - i));
	}
	return answer;
}

// return {number, jump}
vector<int> CheckString(char& s)
{
	if (s == '0')
		return { 0,1 };
	else if (s == '1')
		return { 1,1 };
	else if (s == '2')
		return { 2, 1 };
	else if (s == '3')
		return { 3, 1 };
	else if (s == '4')
		return { 4, 1 };
	else if (s == '5')
		return { 5, 1 };
	else if (s == '6')
		return { 6, 1 };
	else if (s == '7')
		return { 7, 1 };
	else if (s == '8')
		return { 8, 1 };
	else if (s == '9')
		return { 9, 1 };
	else if (s == 'z')
		return { 0, 4 };
	else if (s == 'o')
		return { 1, 3 };
	else if (s == 't')
	{
		if (*(&s + 1) == 'w')
			return { 2,3 };
		else if (*(&s + 1) == 'h')
			return { 3,5 };
	}
	else if (s == 'f')
	{
		if (*(&s + 1) == 'o')
			return { 4,4 };
		else if (*(&s + 1) == 'i')
			return { 5,4 };
	}
	else if (s == 's')
	{
		if (*(&s + 1) == 'i')
			return { 6,3 };
		else if (*(&s + 1) == 'e')
			return { 7,5 };
	}
	else if (s == 'e')
		return { 8,5 };
	else if (s == 'n')
		return { 9,4 };
}

int solution2(string s)
{
	s = regex_replace(s, regex("zero"), "0");
	s = regex_replace(s, regex("one"), "1");
	s = regex_replace(s, regex("two"), "2");
	s = regex_replace(s, regex("three"), "3");
	s = regex_replace(s, regex("four"), "4");
	s = regex_replace(s, regex("five"), "5");
	s = regex_replace(s, regex("six"), "6");
	s = regex_replace(s, regex("seven"), "7");
	s = regex_replace(s, regex("eight"), "8");
	s = regex_replace(s, regex("nine"), "9");
	return stoi(s);
}


int main()
{
	cout << solution("one0") << endl;
	cout << solution2("one01155two") << endl;



	return 0;
}