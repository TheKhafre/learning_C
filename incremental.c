#include <stdio.h>
/**
 * main - the shows a detailed
 * example of the relational operator
 * using a combination with the 
 * incremental and decremental operator
 */
int main()
{
	int a = 18, b = 9, c, d, e = 10;
	c = b++;
	d = b;
	printf("%d\n", a<b<c>d);
	printf("%d\n", b == e);
	printf("%d\n", c +1 > e);
	printf("%d\n", a + c == b > e < c + d);
	getchar();
	return 0;
}
