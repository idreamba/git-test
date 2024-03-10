#include <stdio.h>
#include "plus.c"
#include "sub.c"
#include "multitple.c"
#include "division.c"

int main()
{
	int a, b;

	printf("Insert a number\n");
	scanf("%d", &a);
	scanf("%d", &b);

	printf("The + of %d and %d is %d\n", a, b, add(a, b));
	printf("The - of %d and %d is %d\n", a, b, sub(a, b));
	printf("The * of %d and %d is %d\n", a, b, mul(a, b));
	printf("The / of %d and %d is %d\n", a, b, div(a, b));

	return 0;
}
