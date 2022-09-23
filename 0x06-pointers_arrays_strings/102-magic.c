#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * Write your code here..
	 * Remember:
	 * -you can not use a
	 *  you can not modify p
	 *  only one statement required
	 *  do ot code anything else then this line of code
	 */
	*(p + 5) = 98;
	/* so this will print 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
