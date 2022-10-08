#include <stdio.h>
/**
 * This program is a two dimensional array 
 * that calculates the sum of the 2D array
 * return: the program returns the sum of the arrays
 */
int main()
{
	int a[2][3], i, j, sum = 0;
	printf("Enter array element: \n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
			sum = sum + a[i][j];
		}
		printf("\n");
	}
	printf("sum of the array is = %d\n", sum);
	getchar();
	return 0;
}
