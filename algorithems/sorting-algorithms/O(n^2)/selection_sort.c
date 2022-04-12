
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(int A[], int A_count, int (*cmp_func)(int a, int b));
void swap(int* a, int* b);
int dec(int a, int b);
int inc(int a, int b);

int main(){

    // take the number of items from the user
    int number;
    printf("How many items do you want in the array: ");
    scanf("%i", &number);

    // get the numbers from the user
    int *array = malloc(number * sizeof(int));
    for (int i = 0; i < number; i++){
        printf("number %i: ", i + 1);
        scanf("%i", array + i);
    }

    // sort the numbers in the array
    sort(array, number, inc);

    for (int i = 0; i < number; i++)
        printf("%i\n", array[i]);

    free(array);

    return 0;
}

void sort(int A[], int A_count, int (*cmp_func)(int a, int b)){
    int i, j;
    for (i = 0; i < A_count - 1; i++){
        int tmp = 0;
        int selected_index = i;
        for (j = i + 1; j < A_count; j++){
            
            if ((*cmp_func)(A[selected_index], A[j]))
                selected_index = j;
        }
        if (selected_index != i)
            swap(&A[i], &A[selected_index]);
    }
}

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int dec(int a, int b) {
    return a < b;
}

int inc(int a, int b) {
    return a > b;
}