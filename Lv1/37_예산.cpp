#include "pch.h"

int solution(vector<int> proposal, int budget)
{
	sort(proposal.begin(), proposal.end());

	int possible = 0;
	int sum = 0;
	for (size_t i = 0; i < proposal.size(); i++)
	{
		sum += proposal[i];
		if (sum <= budget)
			++possible;
		else
			break;
	}

	return possible;
}


int main()
{
	cout << solution({ 1,3,2,5,4 }, 9);

}