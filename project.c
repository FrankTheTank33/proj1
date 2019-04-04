#include <stdio.h>

int encrypt_rotate (int message_letter, int k);

int main () {    
    int cipher_letter;
    int message_letter=0;
    int k=1;
    printf("Enter allocated value for message letter: \n");
    scanf("%d", &message_letter);
    
    cipher_letter = encrypt_rotate (message_letter, k);
    printf("Cipher letter for %d is %d", message_letter, cipher_letter);
    
    
return 0;
}

int encrypt_rotate (int message_letter, int k) {
    return (message_letter +k)%26;
}