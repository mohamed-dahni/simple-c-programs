#include <stdio.h>

float total = 0;
short tax_percent = 6;
short count = 0;

float add_with_tax(float f) {
    float tax_rat = 1 + tax_percent / 100.0;
    total += (f * tax_rat);
    count++;
    return total;
}

int main(){
    float val = 0;
    printf("Price of item: ");
    while( scanf("%f[^\n]", &val) == 1 ) {
        printf("\nTotal so far: %.2f\n", add_with_tax(val));
        printf("Price of item: ");
    }

    printf("Total price is: %.2f\n", total);
    printf("Number of items: %hi\n", count);
    
    return 0;
}