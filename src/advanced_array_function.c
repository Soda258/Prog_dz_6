#include "../include/advanced_array_function.h"

int max_subarray_sum(int* nums, int size) {

    int maxx = nums[0];
    int c = nums[0];

    for(int i = 1; i < size; i++){
        if(nums[i] > c + nums[i]){c = nums[i];}
        else{c = c + nums[i];}

        if(c > maxx){maxx = c;}
    }

    return maxx;
}


int* merge(int* intervals, int intervalsSize, int* returnSize) {
    return NULL;
}

