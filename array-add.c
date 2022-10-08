#include <stdio.h>
/**
 * Main - this program read two arrays of size 5 and store
 * the sum of the two arrays in third array.
 * Return: the program returns 0 if success
 */
int main ()
{
	int i;
	int arr1[5], arr2[5];
	int arr3[5];
	printf("Enter the element of first array: ");
	for(i = 0; i < 5; i++)
		scanf("%d", &arr1[i]);
	printf("Enter element of second array: ");
	for(i = 0; i < 5; i++)
		scanf("%d", &arr2[i]);
	for(i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
		printf("arr3 elements at index %d is = %d\n", i, arr3[i]);
	}
	getchar();
	return 0;
}
