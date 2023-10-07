//
//  main.c
//  UNIT4LAB
//
//  Created by Tyler Flowers on 9/28/23.
//
// I used geeks for geeks to come up with this solution

#include <stdio.h>

void printBinaryRepresentation(unsigned n){
    
    if (n>1)
        printBinaryRepresentation(n/2);
        
        printf("%d", n%2);
    
}

int main(void) {
    
    printf("Binary representation of 5: \n");
    printBinaryRepresentation(5);
    printf("Binary representation of 10:\n");
    printBinaryRepresentation(10);
    printf("\n");
           
}


