#include <stdio.h>

int removeDuplicates(int* nums, int numsSize);

int main() {

    int arr[] = {0,0,1,1,1,2,2,3,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int new_num = removeDuplicates(arr, size);

    for(int i = 0; i < new_num; i++)
        printf("%d", arr[i]);
    printf("\n");

    return 0;
}

int removeDuplicates(int* nums, int numsSize){
    int fast, slow = 0;
    for(fast = 1; fast < numsSize; fast++) {
        if(nums[slow] != nums[fast])
            nums[++slow] = nums[fast];
    }
    return slow+1;
}