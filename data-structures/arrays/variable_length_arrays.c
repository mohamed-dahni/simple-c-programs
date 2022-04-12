#include <stdio.h>

int main() {

    // variable length arrays is the arrays that we can specify the length of in in run time
    int length;
    printf("What is the length of your array: ");
    scanf("%d", &length);

    int arr[length];
    for(int i = 0; i < length; i++) {
        arr[i] = i+1;
        printf("%d%c", arr[i], (i==length-1)?'\n':',');
    }

    return 0;
}