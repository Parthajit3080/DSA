int singleNumber(int* nums, int numsSize) {
    int i,j,c=0;
    for(i=0;i<numsSize;i++){
        c=c^nums[i];
    }
    return c;
};