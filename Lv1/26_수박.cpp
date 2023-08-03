#include "pch.h"

string solution(int n)
{
	string s;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
			s.append("수");
		else
			s.append("박");
	}
	return s;
}

// & AND bit operator
// odd number -> ????...???1
// 1 -> 0000...0001
// odd number & 1 -> 0000...0001 = 1 = true
string solution2(int n)
{
	string s;
	for (int i = 1; i <= n; i++)
	{
		i & 1 ? s += "수" : s += "박";
	}
	return s;
}

int main()
{
	cout << solution(4) << endl;
	cout << solution2(4) << endl;

	return 0;
}