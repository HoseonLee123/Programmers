#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	for (auto& letter : str)
	{
		if (letter >= 97)
			letter -= 32;
		else
			letter += 32;
	}
	cout << str << endl;



	return 0;
}