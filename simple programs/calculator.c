// preprocessor directive
#include <stdio.h>

int main(){

    int num_1, num_2;
    char op;

    printf("Enter number 1: ");
    scanf("%i", &num_1);

    printf("Enter operting you want: ");
    scanf(" %c", &op);

    printf("Enter number 2: ");
    scanf("%i", &num_2);

    float result;
    if (op == '/'){
        result = num_1 / num_2;
    }
    else if (op == '+'){
        result = num_1 + num_2;
    }
    else if (op == '*') {
        result = num_1 * num_2;
    }
    else if (op == '-') {
        result = num_1 - num_2;
    }
    else {
        printf("You entered a wrong symbol please enter a valid symbol!");
        return 1;
    }

    printf("Your result is: %.2f\n", result);

    return 0;
}