#include "pch.h"

bool solution(string s)
{
	// Check if the size is 4 or 6.
	if (s.size() == 4 || s.size() == 6)
	{
		// Check for alphabets.
		for (int i = 0; i < s.size(); i++)
		{
			if (!(s[i] >= '0' && s[i] <= '9'))
				return false;
		}

		// Pass all conditions.
		return true;
	}
	return false;
}

int main()
{
	

	return 0;
}