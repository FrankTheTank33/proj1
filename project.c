#include <stdio.h>

int encrypt_rotate (int m, int k);

int main () {
    int e;
    int m=0;
    int k=1;
    
    
    e = encrypt_rotate (m,k);
    printf("%d", e);
    
return 0;
}

int encrypt_rotate (int m, int k) {
    return (m+k)%26;
}