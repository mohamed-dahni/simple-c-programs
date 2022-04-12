#include <stdio.h>
#include <stdlib.h>

#define ARR_LENGTH 10

int main() {

    // dynamic array is the array that are declared in the heap and they can made in run-time
    int *arr = (int*) malloc(sizeof(int)*ARR_LENGTH);
    for(int i = 0; i < ARR_LENGTH; i++) {
        arr[i] = i;
        printf("%d%c", arr[i], (i==ARR_LENGTH-1) ? '\n':',');
    }

    // we to free the dynamic memory alocation
    free(arr);

    return 0;
}