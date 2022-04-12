
#include <stdio.h>
#include <stdlib.h>

int* insert(int arr[], int size, int item);

int main(void) {
    // the static array is the array that are declared in the stack
    int arr[] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
        printf("%i", arr[i]);

    return 0;
}