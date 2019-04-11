#include <stdio.h>

int encrypt_rotate (char c, int k);

int main () {
    char c;
    char e;
    int k=1;
    
    FILE *input;
    input = fopen("Input.txt", "r");
    output = fopen("Output.txt", "w");
    while (!feof(input)) {
        fscanf(input, "%c" &c);
        e = encrypt_rotate(c, k);
        fprintf(ouput, "%c" &e);        
return 0;
}

int encrypt_rotate (char c, int k) {
    return (c+k)%26;
}