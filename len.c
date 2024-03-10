#include<stdio.h>
#include<string.h>
int main(){
    char input[100];
    printf("Insert word : ");
    scanf("%[^\n]",input);
    int lenstr = strlen(input);
    printf("Length of word = %d",lenstr);

    
}