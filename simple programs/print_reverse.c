#include <stdio.h>
#include <string.h>

void print_reverse(char* str) {
    size_t len = strlen(str);
    char* t = str + len - 1;
    while(t >= str) {
        printf("%c", *t);
        t = t - 1;
    }
    puts("");
}

int main() {
    char str[] = "hello world";
    print_reverse(str);
    return 0;
}