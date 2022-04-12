/*
 *
 * program to calculate the sum of a given digit 
 *
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    // get the number
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // calculate the sum of the digit's number
    int last_num, result;
    result = 0;
    while (n > 0) {
        last_num = n % 10;
        result += last_num;
        n /= 10;
    }
    
    // print the answer
    printf("%d\n", result);
    
    return 0;
}