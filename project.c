#include <stdio.h>

int encrypt_rotate (int message_letter, int k);

int main () {    
    int cipher_letter;
    int message_letter=0;
    int k=1;
    
    
    cipher_letter = encrypt_rotate (a,k);
    printf("Cipher letter for %d is %d", a, cipher_letter);
    
    
return 0;
}

int encrypt_rotate (int message_letter, int k) {
    return (message_letter +k)%26;
}