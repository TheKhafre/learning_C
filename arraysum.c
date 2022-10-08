#include <stdio.h>
/**
 * Main - the program checks for input and stores them in memory
 * the stored marks are summed and divided by 5 to give an average
 * Return: the program returns 0 if success
 */
int main ()
{
	int marks[5];
	int i;
	float sum = 0, avg;
	printf("Enter 5 marks: ");
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &marks[i]);
	}
	for(i = 0; i < 5; i++)
	{
		sum = sum + marks[i];
	}
	avg = sum/5;
	printf("The average is %f\n", avg);
	getchar();
	return 0;
}
