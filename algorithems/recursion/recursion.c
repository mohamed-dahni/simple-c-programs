
#include <stdio.h>

void collatz(int n);

int main(){

    int n;

    printf("Get an integer: ");
    scanf("%i", &n);
    collatz(n);

}

void collatz(int n){
    if (n == 0){
        return;
    }
    
    collatz(n - 1);

    for (int i = 0; i < n; i++){

        printf("#");

    }

    printf("\n");

}