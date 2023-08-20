#include "pch.h"

int solution(string t, string p)
{
	vector<string> splits;
	for (size_t i = 0; i <= (t.size() - p.size()); i++)
	{
		splits.push_back(t.substr(i, p.size()));
	}

	int answer = 0;
	for (size_t i = 0; i < splits.size(); i++)
	{
		if (splits[i] <= p)
			++answer;
	}

	return answer;
}

int main()
{
	cout << solution("3141592", "271") << endl;

	return 0;

}