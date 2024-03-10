#include <stdio.h>

int sub(int a, int b){
	return a - b;
}

int add(int a, int b){
	return a + b;
}
int div(int a, int b){
	return a / b;
}

int main(){
	int a,b;

	printf("Insert a number\n");
	scanf("%d", &a);
	scanf("%d", &b);

	printf("The + of %d and %d is %d\n", a, b, add(a,b));
	printf("The - of %d and %d is %d\n", a, b, sub(a,b));
	printf("The / of %d and %d is %d\n", a, b, div(a,b));

	return 0;
}
