#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

bool solution(string s)
{
	int numOfP = 0;
	int numOfY = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'p' || s[i] == 'P')
			++numOfP;
		else if (s[i] == 'y' || s[i] == 'Y')
			++numOfY;
	}

	return numOfP == numOfY;
	//if (numOfP == numOfY)
	//	return true;
	//else
	//	return false;
}


int main()
{
	cout << solution("pPoooyY");


	return 0;
}