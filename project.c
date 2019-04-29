#include <stdio.h>
//Below are the prototypes for each function used in the .c file.
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
    printf("(5) For rotational decryption without given key.\n");

    //User input in Key file will select the process which is to be used.
    scanf("%d", &o);
    switch (o) {
        case 1: printf("Rotational encryption has been chosen.\n");
        break;
        case 2: printf("Rotational decryption with given key has been chosen.\n");
        break;
        case 3: printf("Substitution encryption has been chosen. \n");
        break;
        case 4: printf("Substitution encryption with given substitution has been chosen. \n");
        break;
        case 5: printf("Rotational decryption without key has been chosen.\n");
    }

switch (o)  {  //Depending on which process is used (i.e. assigned value of o), a different case will be selected. Each case is a different operation.
case 1: {  //Rotational Encryption
    int k; // Value of key for encryption.
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

case 2: { //Rotational decryption with given key.
   int k; // Value of key for decryption.
    printf("Enter key value into Key folder.\n");
    scanf("%d", &k); //Enter value of key into Key folder. Run using runProject.
    printf("The key is %d\n", k); 
    
    FILE *input; 
    FILE *output;
    
    input = fopen("Input.txt", "r"); //Reads from Input file. Message to be decrypted contained in this file.
    output = fopen("Output.txt", "w"); //Writes decrypted message into the Output file.
    
    while (feof(input) == 0) {  // Loop which reads each byte from the Input file, puts it through decryption function and prints decrypted letter in Output file. 
        char c;
        fscanf(input, "%c", &c); //Reads byte from the Input file.
        
            d = decrypt_rotate(c, k); //Inserts byte into decryption function.
            fprintf(output, "%c", d); //Prints decrypted character into Output file.

    }
}
break;

case 3: { //Substitution Encryption
   printf("Substitution key must be hard coded below in function 'encrypt_sub' by changing the return values of the switch case.\n");
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

case 4: { //Substitution Decryption with Given Substitutes
    printf("Substitution key must be hard coded below in function 'decrypt_sub' by changing the case values of the switch case.\n");
    FILE *input; 
    FILE *output;
    
    input = fopen("Input.txt", "r"); //Reads from Input file. Message to be decrypted contained in this file.
    output = fopen("Output.txt", "w"); //Writes decrypted message into the Output file.
    
    while (feof(input) == 0) {  // Loop which reads each byte from the Input file, puts it through decryption function and prints decrypted letter in Output file. 
        char c;
        fscanf(input, "%c", &c); //Reads byte from the Input file.
        
        d = decrypt_sub (c); //Applies the substitution decryption.
        fprintf(output, "%c", d); //Prints decrypted message to Output.txt
    }
}
break;

case 5: { //Rotational Decryption Without Given Key
   FILE *input;
    
    //Declares an integer for each possible capital character. Assigned value of 0.
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int E = 0;
    int F = 0;
    int G = 0;
    int H = 0;
    int I = 0;
    int J = 0;
    int K = 0;
    int L = 0;
    int M = 0;
    int N = 0;
    int O = 0;
    int P = 0;
    int Q = 0;
    int R = 0;
    int S = 0;
    int T = 0;
    int U = 0;
    int V = 0;
    int W = 0;
    int X = 0;
    int Y = 0;
    int Z = 0;
    

    input = fopen("Input.txt", "r"); //Reads from Input file. Message to be decrypted contained in this file.

    while (feof(input) == 0) {  // Loop which reads each byte from the Input file until it reaches the end.
        char c;
        fscanf(input, "%c", &c); //Reads byte from the Input file.
        
        //Counts each time each character occurs. Identifies character by its ASCII value. Increments corresponding integer for each letter each time it occurs in the encrypted message.
        if ( (c == 'A') ) 
            A++;
        if ( (c == 'B') ) 
            B++;
        if ( (c == 'C') ) 
            C++;
        if ( (c == 'D') ) 
            D++;
        if ( (c == 'E') ) 
            E++;
        if ( (c == 'F') ) 
            F++;
        if ( (c == 'G') ) 
            G++;
        if ( (c == 'H') ) 
            H++;
        if ( (c == 'I') ) 
            I++;
        if ( (c == 'J') ) 
            J++;
        if ( (c == 'K') ) 
            K++;
        if ( (c == 'L') ) 
            L++;
        if ( (c == 'M') ) 
            M++;
        if ( (c == 'N') ) 
            N++;
        if ( (c == 'O') ) 
            O++;
        if ( (c == 'P') ) 
            P++;
        if ( (c == 'Q') ) 
            Q++;
        if ( (c == 'R') ) 
            R++;
        if ( (c == 'S') ) 
            S++;
        if ( (c == 'T') ) 
            T++;
        if ( (c == 'U') ) 
            U++;
        if ( (c == 'V') ) 
            V++;
        if ( (c == 'W') ) 
            W++;
        if ( (c == 'X') ) 
            X++;
        if ( (c == 'Y') ) 
            Y++;
        if ( (c == 'Z') ) 
            Z++;
    }
    
    //Each character is stored with the following array. The integers maintain the value of how many times each one occurs.
    int characters[] = {A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z};
    
    //Determines the most common character in the cipher.
    float max = 0; 
    int maxIndex = 0 ;
    int i=0;
    for(i=0; i<=25; i++) {
     if (characters[i] > max) { //If the number of times a character occurs is greater then the previous 'max', it replaces that value.
        max = characters[i];
        maxIndex = i;
        }
    }
    //The most common character is now identified by characters[maxIndex].
    
    //Up to this point, characters are identified by there order in the array. They are now each assigned their ASCII value. 
    
    characters[0] = 'A';
    characters[1] = 'B';
    characters[2] = 'C';
    characters[3] = 'D';
    characters[4] = 'E';
    characters[5] = 'F';
    characters[6] = 'G';
    characters[7] = 'H';
    characters[8] = 'I';
    characters[9] = 'J';
    characters[10] = 'K';
    characters[11] = 'L';
    characters[12] = 'M';
    characters[13] = 'N';
    characters[14] = 'O';
    characters[15] = 'P';
    characters[16] = 'Q';
    characters[17] = 'R';
    characters[18] = 'S';
    characters[19] = 'T';
    characters[20] = 'U';
    characters[21] = 'V';
    characters[22] = 'W';
    characters[23] = 'X';
    characters[24] = 'Y';
    characters[25] = 'Z';
    
    //5 different keys are generated by subtracting the most common character in the cipher from a common letter in the alphabet.
    //characters[maxIndex] has been assigned its ASCII value. When a common letter is subtracted from it, it will produce a possible key.
    

    
    FILE *output;
    
    /* Using the 5 different keys, 5 different "decryptions" are found and each is printed into a seperate file.
    It is highly likely one of these "decryptions" will provide a readable message and is the actual decryption.
    This is a "shotgun" approach to the issue. */
    
    input = fopen("Input.txt", "r"); //Reads from Input file. Message to be decrypted contained in this file.
    
    output = fopen("Output.txt", "w"); //Writes possible decrypted message into the Output file.
    
    int k = 0; 
    k = characters[maxIndex] - 69; //E is the most common letter. It may be the most common character in the cipher text.
    printf("A possible key is %d.\n", k);
    
    while (feof(input) == 0) {  // Loop which reads each byte from the Input file, puts it through decryption function and prints decrypted letter in Output file. 
        char c;
        fscanf(input, "%c", &c); //Reads byte from the Input file.
        
            d = decrypt_rotate(c, k); //Inserts byte into decryption function using first possible key.
            fprintf(output, "%c", d); //Prints decrypted character into Output file.
    }
    input = fopen("Input.txt", "r"); //Reads from Input file. Message to be decrypted contained in this file.
    
    output = fopen("Output2.txt", "w"); //Writes possible decrypted message into the Output2 file.
    
    k = characters[maxIndex] - 84; //T is the most common letter. It may be the most common character in the cipher text.
    printf("A possible key is %d.\n", k);
    
    while (feof(input) == 0) {  // Loop which reads each byte from the Input file, puts it through decryption function and prints decrypted letter in Output2 file. 
        char c;
        fscanf(input, "%c", &c); //Reads byte from the Input file.
        
            d = decrypt_rotate(c, k); //Inserts byte into decryption function.
            fprintf(output, "%c", d); //Prints encrypted character into Output2 file using second possible key.
    }
    input = fopen("Input.txt", "r"); //Reads from Input file. Message to be decrypted contained in this file.

    output = fopen("Output3.txt", "w"); //Writes decrypted message into the Output3 file.
    
    k = characters[maxIndex] - 65; //A is another common letter. It may be the most common character in the cipher text.
    printf("A possible key is %d.\n", k);
    
    while (feof(input) == 0) {  // Loop which reads each byte from the Input file, puts it through decryption function and prints decrypted letter in Output3 file. 
        char c;
        fscanf(input, "%c", &c); //Reads byte from the Input file.
        
            d = decrypt_rotate(c, k); //Inserts byte into decryption function using thirt possible key.
            fprintf(output, "%c", d); //Prints decrypted character into Output3 file.
    }
    
    input = fopen("Input.txt", "r"); //Reads from Input file. Message to be decrypted contained in this file.
    
    output = fopen("Output4.txt", "w"); //Writes possible decrypted message into the Output4 file.
    
    k = characters[maxIndex] - 73; //I is the another common letter. It may be the most common character in the cipher text.
    printf("A possible key is %d.\n", k);
    
    while (feof(input) == 0) {  // Loop which reads each byte from the Input file, puts it through decryption function and prints decrypted letter in Output4 file. 
        char c;
        fscanf(input, "%c", &c); //Reads byte from the Input file.
        
            d = decrypt_rotate(c, k); //Inserts byte into decryption function using fourth possible key.
            fprintf(output, "%c", d); //Prints decrypted character into Output4 file.
    }
    input = fopen("Input.txt", "r"); //Reads from Input file. Message to be decrypted contained in this file.
    
    output = fopen("Output5.txt", "w"); //Writes possible decrypted message into the Output5 file.
    
    k = characters[maxIndex] - 78; //N is the another common letter. It may be the most common character in the cipher text.
    printf("A possible key is %d.\n", k);
    
    while (feof(input) == 0) {  // Loop which reads each byte from the Input file, puts it through encryption function and prints encrypted letter in Output5 file. 
        char c;
        fscanf(input, "%c", &c); //Reads byte from the Input file.
        
            d = decrypt_rotate(c, k); //Inserts byte into decryption function using fifth possible key.
            fprintf(output, "%c", d); //Prints decrypted character into Output5 file.
    }

break;
    
}

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
        if (c-65-k>=0)
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
    if (c>=65 && c<=90) { //Defines capital letters by ASCII values. Substitutes each value with an ASCII value of a different capital letter. 
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
