#include <iostream>

using namespace std;


int solution(int n)
{

	for (int i = 2; i <= (n - 1); i++)
	{
		if ((n - 1) % i == 0)
		{
			cout << i << endl;
			return i;

		}
	}
}


int main()
{
	solution(5);
	solution(12);
	solution(7);



	return 0;
}

