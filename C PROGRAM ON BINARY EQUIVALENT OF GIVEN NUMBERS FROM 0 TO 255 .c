#include <stdio.h> 
#include<conio.h> 
void main()  
{ 
    int number; 
 printf("apllication number :JUUG23BTECH15099 and  name:B.KYLASH REDDY"); 
    // Prompt the user to enter a number between 0 and 255 
    printf( "\n Enter a number between 0 and 255: "); 
    scanf("%d", &number);  
    // Check if the input is within the valid range 
    if (number >= 0 && number <= 255) { 
        // Convert the number to binary representation 
        int binary[8]; // Array to store binary digits 
        int i; 
 
        // Convert to binary 
        for (i = 7; i >= 0; --i) { 
            binary[i] = number % 2; 
            number /= 2; 
        }  
        // Print the binary representation 
        printf("Binary equivalent: "); 
        for (i = 0; i < 8; ++i) { 
            printf("%d", binary[i]); 
        } 
        printf("\n"); 
    } else { 
        // Invalid input 
        printf("Invalid input. Please enter a number between 0 and 255.\n"); 
    }  
    return 0; 
} 
