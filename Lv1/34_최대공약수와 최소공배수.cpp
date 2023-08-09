#include "pch.h"

vector<int> solution(int n, int m)
{
	vector<int> factorsOfN;
	vector<int> factorsOfM;

	// Find all factors of n and m.
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			factorsOfN.push_back(i);
	}
	for (int i = 1; i <= m; i++)
	{
		if (m % i == 0)
			factorsOfM.push_back(i);
	}

	// Find the Greatest Common Factor and Least Common Multiple.
	int GCF = 0;
	int LCM = 0;
	for (int i = factorsOfN.size() - 1; i >= 0; i--)
	{
		if (m % factorsOfN[i] == 0)
		{
			GCF = factorsOfN[i];
			break;
		}
		else
			factorsOfN.pop_back();
	}
	LCM = GCF * (n / GCF) * (m / GCF);
	vector<int> answer;
	answer.push_back(GCF);
	answer.push_back(LCM);
	//PrintVector(answer);

	return answer;;
}

vector<int> solution2(int n, int m)
{
	// Find the smaller number.
	int bigger = n;
	if (n > m)
	{
		n = m;
		m = bigger;
	}

	// Find the GCF and LCM.
	vector<int> answer;
	for (int i = n; i > 0; i--)
	{
		if ((n % i == 0) && (m % i == 0))
		{
			answer.push_back(i);
			answer.push_back((n * m) / i);
			break;
		}
	}
	return answer;
}

int main()
{
	PrintVector(solution(12, 24));
	PrintVector(solution2(3, 7));


}

