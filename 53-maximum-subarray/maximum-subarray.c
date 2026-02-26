int maxSubArray(int* nums, int numsSize) {
    int currSum=0,maxSum=nums[0],i;
    for(i=0;i<numsSize;i++){
        currSum+=nums[i];
        maxSum=currSum>maxSum?currSum:maxSum;
        if(currSum<0) currSum=0;
    }
    return maxSum;
}