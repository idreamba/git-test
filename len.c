
int lenchr(char *input) {
    int chr = 0, i;
    
    for (i = 0; input[i] != '\0'; i++) {
        chr = i + 1;  
    }
    
    return chr;
}
