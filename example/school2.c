#include <stdio.h>

int main()
{
	
	for (int i = 1; i < 101; i++)
	{

		if (i % 5 == 0)
			printf("");
		else
			printf("%d\n", i);
	}
}