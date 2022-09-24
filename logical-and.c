#include <stdio.h>
/**
 * main - the program gives an example of 
 * logical and operator. the example combines
 * relational operators and the logical operator
 */
int main()
{
	int a = 4, b = 6, result;
	result = a < b && printf("hello");
	printf("%d\n", result);
	getchar();
	return 0;
}
