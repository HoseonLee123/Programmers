#include "pch.h"

string solution(string s)
{
	int checkIndex = 0;
	for (size_t i = 0; i < s.size(); ++i)
	{
		if (s[i] == ' ')
		{
			checkIndex = 0;
			continue;
		}

		if (checkIndex % 2 == 0)
		{
			s[i] = toupper(s[i]);
		}
		else
		{
			s[i] = tolower(s[i]);
		}

		++checkIndex;
	}
	return s;
}

int main()
{
	cout << solution("try hello world") << endl;



	return 0;
}