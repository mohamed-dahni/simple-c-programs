// preprocessor directive
#include <stdio.h>

int main(){
    float fahr, celsuis;
    float lower, upper, step; 

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Celsuis\tfahrenheit\n");

    while(celsuis <= upper){
        fahr = celsuis * 1.8 + 32;
        printf("%7.0f\t%10.0f\n", celsuis, fahr);

        celsuis += step;
    }

}