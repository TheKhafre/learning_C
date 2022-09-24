#include <stdio.h>
/**
 * main - this is an example to show the
 * logical OR operator. this checks the two
 * conditions and returns true if one of them
 * is true.
 */
int main()
{
	int a = 10, b = 5, result;
	result = a > b || a++;
	printf("%d\n", result);
	printf("%d\n", a);
	getchar();
	return 0;
}
