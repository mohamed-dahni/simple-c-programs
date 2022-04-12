#include <stdio.h>
// this header for integers
#include <limits.h>
// this header for floats
#include <float.h>

int main() {

    // integer limits
    printf("The maxmum value of int data type in this platform is: %d\n", INT_MAX);
    printf("The minimum value of int data type in this platform is: %d\n", INT_MIN);
    printf("The number of bytes that the int data type takes in this platform is: %ld\n", sizeof(int));

    // float limits
    printf("The maxmum value of float data type in this platform is: %f\n", FLT_MAX);
    printf("The minimum value of float data type in this platform is: %f\n", FLT_MIN);
    printf("The number of bytes that the float data type takes in this platform is: %ld\n", sizeof(float));

    return 0;
}