#include "pch.h"

long long solution(int price, int money, int count)
{
	long long required = 0;
	for (int i = 1; i <= count; i++)
	{
		required += static_cast<long long>(price) * i;
	}

	return required > money ? required - money : 0;
}