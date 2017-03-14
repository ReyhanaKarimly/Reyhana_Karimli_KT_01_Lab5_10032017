#include <stdio.h>
#include <stdlib.h>
void main()
{
	int f,n;

	for (int n = 1; n<= 10; n++)
	{
		f = 1;
		for (int i = 1; i <= n; i++)
		{
			f *= i;
			
		}
		printf("%2d! = %d\n", n, f);
	}
	printf("\n");
	system("Pause");
}