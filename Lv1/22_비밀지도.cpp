#include "pch.h"

string Decode(int code, int n)
{
	string s = "";

	while (true)
	{

		if ((code % 2) == 1)
			s = "#" + s;
		else
			s = " " + s;
		code /= 2;

		if ((code / 2 == 0) && (code % 2 == 1))
		{
			s = "#" + s;

			// Case : code = 5, n = 6 -> s = 000101
			// Fill in the front with insufficient zeros.
			while (s.size() != n)
				s = " " + s;

			
			break;
		}
	}

	return s;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2)
{
	vector<string> result;
	for (int i = 0; i < n; i++)
	{
		int value = arr1[i] | arr2[i];
		string decoding = Decode(value, n);
		result.push_back(decoding);
	}


	return result;
}

vector<string> solution2(int n, vector<int> arr1, vector<int> arr2)
{
	vector<string> result;
	for (int i = 0; i < n; i++)
	{
		int value = arr1[i] | arr2[i];
		string decoding;
		for (int j = 0; j < n; j++)
		{
			decoding.push_back(value % 2 ? '1' : '0');
			value /= 2;
		}
		reverse(decoding.begin(), decoding.end());
		result.push_back(decoding);
	}


	return result;
}

int main()
{
	PrintVector(solution(6, { 46, 33, 33 ,22, 31, 50 }, { 27 ,56, 19, 14, 14, 10 }));
	PrintVector(solution2(6, { 46, 33, 33 ,22, 31, 50 }, { 27 ,56, 19, 14, 14, 10 }));


	return 0;
}