#include <stdio.h>
#include <math.h>

typedef enum {false, true} bool;

bool isPrime(int num) {
    int iter = ceil(num/2);
    for(int i = 2; i < iter; i++)
        if(num%i == 0) return false;
    return true;
}

int main() {

    int num;
    printf("Enter a number to be ckecked if it is a prime: ");
    scanf("%d", &num);
    printf("Your number is%sPrime\n", (isPrime(num))?" ":" not a ");

    return 0;
}
