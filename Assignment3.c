//Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its binary equivalent using a while loop.
//Example, lets say input is 7, output should be 111

#include <stdio.h>

int main() {
    int decimalNum, binaryNum = 0, remainder, place = 1;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    
    while (decimalNum > 0) {
        remainder = decimalNum % 2;
        binaryNum += remainder * place;
        place *= 10;
        decimalNum /= 2;
    }
    
    printf("Binary equivalent: %d\n", binaryNum);
    
    return 0;
}

