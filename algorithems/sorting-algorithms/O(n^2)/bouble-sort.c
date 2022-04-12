
#include <stdio.h>

void bouble_sort(int *array, int arr_count);

int main(){

    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    bouble_sort(arr, size);

    for (int i = 0; i < size; i++){

        printf("%i\n", arr[i]);

    }

    return 0;
}

void bouble_sort(int *array, int arr_count){

    int i, j, tmp;
    for (i = 0; i < arr_count - 1; i++){
        for (j = 0; j < arr_count - i - 1; j++){
            if (array[j] > array[j + 1]){
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}