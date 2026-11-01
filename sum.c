#include <stdio.h>


long absdiff (long x, long y)
{
	long result;
	if (x > y)
	{
		result = x - y;
	}
	if (x < y)
	{
		result = y - x;
	}
	return result;
}


int main()
{
	return 0;
}
