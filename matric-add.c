#include <stdio.h>
/**
 * This program is a two dimensional array
 * that calculates the sum of the 2D array
 * return: the program returns the sum of the arrays
 */
int main()
{
	int a[2][3];
	int b[2][3];
	int c[2][3];
	int i, j;
	printf("Enter first array elements: \n");
	for(i = 0; i < 2; i++)
		for(j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	printf("Enter second array elements: \n");
	for(i = 0; i < 2; i++)
		for(j = 0; j < 3; j++)
			scanf("%d", &b[i][j]);
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	getchar();
	return 0;
}
