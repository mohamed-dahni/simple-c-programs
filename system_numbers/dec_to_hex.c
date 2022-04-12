
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char get_hex_digit(int dec_num);
char* concat(char* str, char chr);

int main() {

    int dec_number;
    printf("Enter a decimal number: ");
    scanf("%d", &dec_number);

    char *result = NULL;
    while(dec_number > 0) {
        result = concat(result, get_hex_digit(dec_number%16));
        dec_number /= 16;
    }

    printf("Your number in hex is: %s", result);

    return 0;
}

char get_hex_digit(int dec_num) {
    const char hex_arr[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'D', 'C', 'E', 'F'};
    return hex_arr[dec_num];
}

char* concat(char* str, char chr) {
    if(str == NULL) {
        char *new_str = (char*) malloc(2*sizeof(char));
        new_str[0] = chr;
        new_str[1] = '\0';
        return new_str;
    }
    char *new_str = (char*) malloc((strlen(str)+2)*sizeof(char));
    size_t i;
    new_str[0] = chr;
    for(i = 1; i < strlen(str); i++)
        new_str[i] = str[i];
    new_str[i] = '\0';
    return new_str;
}