#include "pch.h"

string solution(vector<string> seoul)
{
	for (int i = 0; i < seoul.size(); i++)
	{
		if (seoul[i] == "Kim")
			return "�輭���� " + to_string(i) + "�� �ִ�";
	}
}

int main()
{
	cout << solution({ "Jane", "Kim" });

}