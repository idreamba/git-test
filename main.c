#include <stdio.h>
#include "plus.c"
#include "sub.c"
#include "multitple.c"
#include "division.c"
#include "len.c"

int main()
{
	int a, b;
	char input[100];


	// printf("Insert a number : \n");
	// scanf("%d", &a);
	// scanf("%d", &b);
	printf("Insert a word : \n");
	scanf("%[^\n]",input);

	// printf("The + of %d and %d is %d\n", a, b, add(a, b));
	// printf("The - of %d and %d is %d\n", a, b, sub(a, b));
	// printf("The * of %d and %d is %d\n", a, b, mul(a, b));
	// printf("The / of %d and %d is %d\n", a, b, div(a, b));
	printf("The length of word = %d",lenchr(input));

	return 0;
}
