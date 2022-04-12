
#include <stdio.h>

void merge_sort(int arr[], int l, int r);
void merge(int arr[], int l, int mid, int r);

int main() {

    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    merge_sort(arr, 0, size-1);
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void merge_sort(int arr[], int l, int r) {
    if(l >=r)
        return;

    int mid = (r-l)/2 + l;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid+1, r);

    merge(arr, l, mid, r);
}

void merge(int arr[], int l, int mid, int r) {
    int i, j, k;
    int n1 = mid-l+1, n2 = r-mid;
    int R1[n1], R2[n2]; 

    for(i = 0; i < n1; i++)
        R1[i] = arr[l+i];
    for(i = 0; i < n2; i++)
        R2[i] = arr[mid+i+1];

    i = 0;
    j = 0;
    k = l;
    while(i < n1 && j < n2) {
        if(R1[i] <= R2[j]) {
            arr[k] = R1[i];
            i++;
        } else {
            arr[k] = R2[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        arr[k] = R1[i];
        i++;
        k++;
    }
    while(j < n2) {
        arr[k] = R2[j];
        j++;
        k++;
    }
}