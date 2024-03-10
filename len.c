#include <stdio.h>

int main() {
    char input[100];
    int chr = 0;

    printf("Insert word: ");
    scanf("%[^\n]", input);

    for (int i = 0; input[i] != '\0'; i++) {
        chr = i + 1;  
    }

    printf("Length of this word = %d", chr);

    return 0;
}
