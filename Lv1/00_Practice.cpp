#include "pch.h"

int main()
{
	bool arr[] = { 1, 0, true, false, 3, "Hello"};
	
	// true or false
	cout << boolalpha;
	for (const auto& data : arr)
		cout << data << " ";

	cout << endl;

	// 1 or 0
	cout << noboolalpha;
	for (const auto& data : arr)
		cout << data << " ";

	cout << endl;
}