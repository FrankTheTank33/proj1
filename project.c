#include <stdio.h>

char encrypt_rotate (char c, int k);

char decrypt_rotate (char c, int k); 

char encrypt_sub (char c);

char decrypt_sub (char c);

int main () {
    char e; // Variable for encrypted letters.
    char d; // Variable for decrypted letters.
    
    
    printf("Select operation via Key folder. \n");
    int o=0; // 
    printf("(1) For rotational encryption.\n");
    printf("(2) For rotational decryption with given key.\n");
    printf("(3) For substitution encryption.\n");
    printf("(4) For substitution decryption with given substitution.\n");

    
    scanf("%d", &o);
    switch (o) {
        case 1: printf("Rotational encryption has been chosen.\n");
        break;
        case 2: printf("Rotational decryption with given key has been chosen.\n");
        break;
        case 3: printf("Substitution encryption has been chosen. \n");
        break;
        case 4: printf("Substituion encryption with given substitution has been chosen. \n");
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
        
        e = encrypt_sub (c); //Applies the substitution encryption.
        fprintf(output, "%c", e); //Prints encrypted message to Output.txt
        
    }
}
break;

case 4: {
    FILE *input; 
    FILE *output;
    
    input = fopen("Input.txt", "r"); //Reads from Input file. Message to be encrypted contained in this file.
    output = fopen("Output.txt", "w"); //Writes encrypted message into the Output file.
    
    while (feof(input) == 0) {  // Loop which reads each byte from the Input file, puts it through encryption function and prints encrypted letter in Output file. 
        char c;
        fscanf(input, "%c", &c); //Reads byte from the Input file.
        
        d = decrypt_sub (c); //Applies the substitution decryption.
        fprintf(output, "%c", d); //Prints decrypted message to Output.txt
    }
}
break;
return 0;
}

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
    return c; //For all non-letter characters, the function does not change them.
    if (c>=65 && c<=90) {   //Defines capital letters by ASCII values. Substitutes each value with an ASCII value of a different capital letter. 
        switch (c) {    //QWERTY substitution put in as template. Manual input required for different substitutions. Change second column.
            case 'A': return 'Q'; 
            break;
            case 'B': return 'W';
            break;
            case 'C': return 'E';
            break; 
            case 'D': return 'R';
            break;
            case 'E': return 'T';
            break;
            case 'F': return 'Y';
            break;
            case 'G': return 'U';
            break;
            case 'H': return 'I';
            break;
            case 'I': return 'O';
            break;
            case 'J': return 'P';
            break;
            case 'K': return 'A';
            break;
            case 'L': return 'S';
            break;
            case 'M': return 'D';
            break;
            case 'N': return 'F';
            break;
            case 'O': return 'G';
            break;
            case 'P': return 'H';
            break;
            case 'Q': return 'J';
            break;
            case 'R': return 'K';
            break;
            case 'S': return 'L';
            break;
            case 'T': return 'Z';
            break;
            case 'U': return 'X';
            break;
            case 'V': return 'C';
            break;
            case 'W': return 'V';
            break;
            case 'X': return 'B';
            break;
            case 'Y': return 'N';
            break;
            case 'Z': return 'M';
            break;
        }
    }
return 0;
}

char decrypt_sub (char c) {
   if ((c<65) || (c>90)) 
    return c; //For all non-letter characters the function does not change them.
   if (c>=65 && c<=90) {   //Defines capital letters by ASCII values. Substitutes each value with an ASCII value of a different capital letter.
        switch (c) {    //QWERTY substitution put in as template. Manual input required for different substitutions. Change first column. 
            case 'Q': return 'A'; 
            break;
            case 'W': return 'B';
            break;
            case 'E': return 'C';
            break; 
            case 'R': return 'D';
            break;
            case 'T': return 'E';
            break;
            case 'Y': return 'F';
            break;
            case 'U': return 'G';
            break;
            case 'I': return 'H';
            break;
            case 'O': return 'I';
            break;
            case 'P': return 'J';
            break;
            case 'A': return 'K';
            break;
            case 'S': return 'L';
            break;
            case 'D': return 'M';
            break;
            case 'F': return 'N';
            break;
            case 'G': return 'O';
            break;
            case 'H': return 'P';
            break;
            case 'J': return 'Q';
            break;
            case 'K': return 'R';
            break;
            case 'L': return 'S';
            break;
            case 'Z': return 'T';
            break;
            case 'X': return 'U';
            break;
            case 'C': return 'V';
            break;
            case 'V': return 'W';
            break;
            case 'B': return 'X';
            break;
            case 'N': return 'Y';
            break;
            case 'M': return 'Z';
            break;
        }
    }
return 0;
}
