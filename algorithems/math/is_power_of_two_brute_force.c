#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

typedef enum {
    false,
    true
} bool;

bool is_power_of_two(int n) {
    while(true) {
        if ( n == 1 ) {
            return true;
        } else if ( ((n % 2) == 1) ) {
            return false;
        }

        n /= 2;
    }
}

int main(int argc, char** argv, char** envp) {

    int n;
    scanf("%d", &n);
    printf("%s\n", is_power_of_two(n) ? "YES" : "NO");

	return EXIT_SUCCESS;
}