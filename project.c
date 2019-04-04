#include <stdio.h>

int main() {
int m = 12;
int e=0;
int d;

int k = 3;

e=(m+k)%26;

d=(e-k)&26;

printf("%d", d);

  return 0;
}
