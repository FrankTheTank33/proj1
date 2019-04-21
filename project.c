#include <stdio.h>

char encrypt_rotate (char c, int k);

char decrypt_rotate (char c, int k); 

char encrypt_sub (char c);

int main () {
    char e; // Variable for encrypted letters.
    char d; // Variable for decrypted letters.
    
    
    printf("Select operation via Key folder. \n");
    int o=0; // 
    printf("(1) For rotational encryption.\n");
    printf("(2) For rotational decryption.\n");
    printf("(3) For substitution encryption.\n");
    printf("(4) For substitution decryption.\n");

    
    scanf("%d", &o);
    switch (o) {
        case 1: printf("Rotational encryption has been chosen.\n");
        break;
        case 2: printf("Rotational decryption has been chosen.\n");
        break;
        case 3: printf("Substitution encryption has been chosen. \n");
        break;
        case 4: printf("Substituion encryption has been chosen. \n");
        break;
    }

switch (o)  {
case 1: {
    int k; // Value of key for decryption.
    printf("Enter key value into Key folder.\n");
    scanf("%d", &k); //Enter value of key into Key folder. Run using runProject.
    printf("The key is %d\n", k); 
   
   FILE *input; 
    FILE *output;
    
    input = fopen("Input.txt", "r"); //Reads from Input file. Message to be encrypted contained in this file.
    output = fopen("Output.txt", "w"); //Writes encrypted message into the Output file.
    
    while (feof(input) == 0) {  // Loop which reads each byte from the Input file, puts it through encryption function and prints encrypted letter in Output file. 
        char c;
        fscanf(input, "%c", &c); //Reads byte from the Input file.
        
            e = encrypt_rotate(c, k); //Inserts byte into encryption function.
            fprintf(output, "%c", e); //Prints encrypted character into Output file.
        
            }
        }
break;

case 2: {
   int k; // Value of key for decryption.
    printf("Enter key value into Key folder.\n");
    scanf("%d", &k); //Enter value of key into Key folder. Run using runProject.
    printf("The key is %d\n", k); 
    
    FILE *input; 
    FILE *output;
    
    input = fopen("Input.txt", "r"); //Reads from Input file. Message to be encrypted contained in this file.
    output = fopen("Output.txt", "w"); //Writes encrypted message into the Output file.
    
    while (feof(input) == 0) {  // Loop which reads each byte from the Input file, puts it through encryption function and prints encrypted letter in Output file. 
        char c;
        fscanf(input, "%c", &c); //Reads byte from the Input file.
        
            d = decrypt_rotate(c, k); //Inserts byte into encryption function.
            fprintf(output, "%c", d); //Prints encrypted character into Output file.

    }
}
break;

case 3: {
    FILE *input; 
    FILE *output;
    
    input = fopen("Input.txt", "r"); //Reads from Input file. Message to be encrypted contained in this file.
    output = fopen("Output.txt", "w"); //Writes encrypted message into the Output file.
    
    while (feof(input) == 0) {  // Loop which reads each byte from the Input file, puts it through encryption function and prints encrypted letter in Output file. 
        char c;
        fscanf(input, "%c", &c); //Reads byte from the Input file.
        
        e = encrypt_sub (c);
        fprintf(output, "%c", e);
        
}
}
break;
}
return 0;
}


 char encrypt_rotate (char c, int k) {
    if ((c<65) || (c>90 && c<97) || (c>122)) //For all non-letter characters, the function does not change them.
    return c;
    
   if (c>=65 && c<=90) //For all upper-case characters.
    return (((c-65)+k)%26)+65;  
    /*ASCII value reduced by 65 so that A=0...Z=25. 
    This value is changed by the key. 
    The remainder of this value and 26 is found. 
    65 is added to the value to return to an ASCII value. */
    return 0;   
}

char decrypt_rotate (char c, int k) {
    if ((c<65) || (c>90)) 
    return c;
    //For all non-letter characters, the function does not change them.
    if (c>=65 && c<=90) {  // For all uppercase letters.
        if (c-65-k<0)
            return ((((c-65)-k)+26)%26)+65; 
            //In case the ASCII value is -ve, 26 is added as "%" does not function with -ves.
        if (c-65>=0)
            return (((c-65)-k)%26)+65; 
    }
    /*ASCII value reduced by 65 so that A=0...Z=25. 
    This value is changed by the key. 
    The remainder of this value and 26 is found. 
    65 is added to the value to return to an ASCII value.*/
    return 0;      
}

char encrypt_sub (char c) {
    if ((c<65) || (c>90)) 
    return c;
    //For all non-letter characters, the function does not change them.
    if (c>=65 && c<=90) {
        switch (c) {
            case 65: return 81; 
            break;
            case 66: return 87;
            break;
            case 67: return 69;
            break; 
            case 68: return 82;
            break;
            case 69: return 84;
            break;
            case 70: return 89;
            break;
            case 71: return 85;
            break;
            case 72: return 73;
            break;
            case 73: return 79;
            break;
            case 74: return 80;
            break;
            case 75: return 65;
            break;
            case 76: return 83;
            break;
            case 77: return 68;
            break;
            case 78: return 70;
            break;
            case 79: return 71;
            break;
            case 80: return 72;
            break;
            case 81: return 74;
            break;
            case 82: return 75;
            break;
            case 83: return 76;
            break;
            case 84: return 90;
            break;
            case 85: return 88;
            break;
            case 86: return 67;
            break;
            case 87: return 86;
            break;
            case 88: return 66;
            break;
            case 89: return 78;
            break;
            case 90: return 77;
            break;
        }
    }
return 0;
}