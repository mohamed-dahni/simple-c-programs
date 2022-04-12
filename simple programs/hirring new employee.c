#include <stdio.h>
#include <string.h>

int main() {

    // ask user for his/her age
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);

    // ask user for his/her license
    char license;
    printf("Do you have a driver license, enter Y (YES) or N (NO)\n");
    scanf(" %c", &license);

    // print the result of the validation
    if (age > 21 && (license == 'Y' || license == 'y')) {
        printf("Hired\n");
    } else if (age <= 21 || (license == 'N' || license == 'n')) {
        printf("Rejected\n");
    } else {
        printf("You entered invalid answers!\n");
    }

    return 0;
}