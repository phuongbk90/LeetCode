#include <stdio.h>

/*
Input: [2,2,1]
Output: 1

Input: [4,1,2,1,2]
Output: 4
*/

int singleNumber(int* nums, int numsSize);

int singleNumber(int* nums, int numsSize){

    int first_num = 0;
    for(int i = 0; i < numsSize; i++) 
    {
        first_num ^= nums[i];        
    }
    return first_num;
}

int main(void) 
{

    int nums[] = {2,2,1};
    int numsSize = 3;

    printf("Function singleNumber() output: %d", singleNumber(nums, numsSize));
    return 0;
}
