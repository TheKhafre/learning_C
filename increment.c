#include <stdio.h>
int main ()
{
	int a = 5, b, c, d;
	b = ++a;
	c = a++;
	d = ++a;
	printf("%d", a);
	getchar();
	return 0;
}
