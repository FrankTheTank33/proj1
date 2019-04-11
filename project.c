#include <stdio.h>

char encrypt_rotate (char c, int k);

int main () {
    char e; // Variable for encrypted letters.
    int k; // Value of key for encryption.
    scanf("%d", &k); //Enter value of key into Key folder. Run using runProject.
    printf("The key is %d\n", k);
    
    FILE *input; 
    FILE *output;
    
    input = fopen("Input.txt", "r"); //Reads from Input file. Message to be encrypted contained in this file.
    output = fopen("Output.txt", "w"); //Writes encrypted message into the Output file.
    
    while (feof(input) == 0) {    // Loop which reads each byte from the Input file, puts it through encryption function and prints encrypted letter in Output file. 
        char c;
        fscanf(input, "%c", &c); //Reads byte from the Input file.
        e = encrypt_rotate(c, k); //Inserts byte into encryption function. 
        fprintf(output, "%c", e); //Prints encrypted character into Output file.
    }
return 0;
}

 char encrypt_rotate (char c, int k) {
    if (c == 32 || c == 46) //For all "SPACE" and "." characters, the function does not change them.
    return c;
    if (c>=97 && c<=122)     //For all lower-case characters.
    return (((c-97)+k)%26)+97;  
    //ASCII value reduced by 97 so that a=0...z=25. This value is changed by the key. The remainder of this value and 26 is found. 97 is added to the value to return to an ASCII value.
    if (c>=65 && c<=90) //For all upper-case characters.
    return (((c-65)+k)%26)+65;  
    //ASCII value reduced by 65 so that A=0...Z=25. This value is changed by the key. The remainder of this value and 26 is found. 65 is added to the value to return to an ASCII value.
}  