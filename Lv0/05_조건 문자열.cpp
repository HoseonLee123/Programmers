#include <iostream>
#include <string>

using namespace std;

int solution(string ineq, string eq, int n, int m)
{
	// ineq : < or >
	// eq : = or !
	string oper = ineq + eq;

	if (oper == ">=")
		return n >= m;
	else if (oper == "<=")
		return n <= m;
	else if (oper == ">!")
		return n > m;
	else if (oper == "<!")
		return n < m;
	else
		return 0;
}


int main()
{
	string str;
	cin >> str;
	getline(cin, str);
	cout << str << endl;

	return 0;
}