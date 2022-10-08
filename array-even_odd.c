#include <stdio.h>
/**
 * Main - this program reads an array of 10 integers
 * and count total number of even and odd elements
 * Return: the program returns 0 if success
 */
int main ()
{
	int a[10], i;
	int even = 0, odd = 0;
	printf("Enter ten random numbers: ");
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		if(a[i] % 2 == 0)
			even = even + 1;
		else
			odd = odd + 1;
	}
	printf("even elements are: %d\n", even);
	printf("odd elements are: %d\n", odd);
	getchar();
	return 0;
}
