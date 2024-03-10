## My programming in c
- i like c
- i love c

```c
#include <stdio.h>

int add(int a, int b){
	return a + b;
}

int main(){
	int a,b;

	printf("Insert a number\n");
	scanf("%d", &a);
	scanf("%d", &b);

	printf("The sum of %d and %d is %d\n", a, b, add(a,b));

	return 0;
}

```
