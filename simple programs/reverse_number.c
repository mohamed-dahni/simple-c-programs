#include <stdio.h>

int reverse(int num) {
    int result = 0;
    while(num > 0) {
        result = result * 10 + num%10;
        num /= 10;
    }
    return result;
}

int main() {

    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("the reversed number of %d = %d\n", n, reverse(n));
    
    return 0;
}