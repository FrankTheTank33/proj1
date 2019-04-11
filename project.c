#include <stdio.h>

char encrypt_rotate (char c, int k);

char decrypt_rotate (char c, int k); 

int main () {
    char e; // Variable for encrypted letters.
    char d; // Variable for decrypted letters.
    
    int k; // Value of key for encryption.
    scanf("%d", &k); //Enter value of key into Key folder. Run using runProject.
    printf("The key is %d\n", k); 
    
    int o=0; // Variable for choosing operation.
    printf("(1) For rotational encryption.\n");
    printf("(2) For rotational decryption.\n");
    scanf("%d", &o);
    switch (o) {
        case 1: printf("Rotational encryption has been chosen.\n");
        break;
        case 2: printf("Rotational decryption has been chosen.\n");
        break;
    }
    
    FILE *input; 
    FILE *output;
    
    input = fopen("Input.txt", "r"); //Reads from Input file. Message to be encrypted contained in this file.
    output = fopen("Output.txt", "w"); //Writes encrypted message into the Output file.
    
    while (feof(input) == 0) {    // Loop which reads each byte from the Input file, puts it through encryption function and prints encrypted letter in Output file. 
        char c;
        fscanf(input, "%c", &c); //Reads byte from the Input file.
        switch (o) {  //Selects operation depending option selected.
            case 1: e = encrypt_rotate(c, k); //Inserts byte into encryption function.
            fprintf(output, "%c", e); //Prints encrypted character into Output file.
            /* printf("%c", e); */
            break;
            case 2: d = decrypt_rotate(c,k); //Inserts byte into decryption fucntion.
            fprintf(output, "%c", d);  //Prints decrypted chracter into Output file.
            /* printf("%c", d); */
            break;
        }
    }
return 0;
}

 char encrypt_rotate (char c, int k) {
    if ((c<65) || (c>90 && c<97) || (c>122)) //For all non-letter characters, the function does not change them.
    return c;
    if (c>=97 && c<=122)     //For all lower-case characters.
    return (((c-97)+k)%26)+97;  
    //ASCII value reduced by 97 so that a=0...z=25. This value is changed by the key. The remainder of this value and 26 is found. 97 is added to the value to return to an ASCII value.
    if (c>=65 && c<=90) //For all upper-case characters.
    return (((c-65)+k)%26)+65;  
    //ASCII value reduced by 65 so that A=0...Z=25. This value is changed by the key. The remainder of this value and 26 is found. 65 is added to the value to return to an ASCII value.
    return 0;   
}

char decrypt_rotate (char c, int k) {
    if ((c<65) || (c>90 && c<97) || (c>122)) //For all non-letter characters, the function does not change them.
    return c;
    if (c>=97 && c<=122) {
        if (c-97-k<0)
            return ((((c-97)-k)+26)%26)+97;
        if (c-97-k >= 0)
            return (((c-97)-k)%26)+97;  
    }
    //ASCII value reduced by 97 so that a=0...z=25. This value is changed by the key. The remainder of this value and 26 is found. 97 is added to the value to return to an ASCII value.
    if (c>=65 && c<=90) {
        if (c-65-k<0)
            return ((((c-65)-k)+26)%26)+65; 
        if (c-65>=0)
            return (((c-65)-k)%26)+65; 
    }
    //ASCII value reduced by 65 so that A=0...Z=25. This value is changed by the key. The remainder of this value and 26 is found. 65 is added to the value to return to an ASCII value.
    return 0;   
    
}