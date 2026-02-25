int maxSubArray(int* nums, int numsSize) {
    int current_sum = nums[0];
    int max_sum = nums[0];
    
    for(int i = 1; i < numsSize; i++) {
        // Decide: start new or continue previous
        if(current_sum + nums[i] > nums[i])
            current_sum = current_sum + nums[i];
        else
            current_sum = nums[i];
        
        // Update global maximum
        if(current_sum > max_sum)
            max_sum = current_sum;
    }
    
    return max_sum;
}