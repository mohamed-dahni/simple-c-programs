#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(sizeof(int)*num);
    for(i = 0; i < num; i++)
        scanf("%d", &arr[i]);
        
    
    for(i = 0; i < num; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}