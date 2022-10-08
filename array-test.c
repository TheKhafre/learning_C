#include <stdio.h>
/**
 * main - the program is an exercise to test for array
 * it includes saving into memory and printing from memory
 * return 0 if success
 */
int main()
{
	int a[5], i;
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
		getchar();
	}
}
