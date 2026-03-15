

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    numsSize=2*n;
    *returnSize=numsSize;
    int* ans = malloc((numsSize)*sizeof(int));
    int j=0;
    for(int i=0;i<numsSize;i=i+2){
        ans[i]=nums[j]; 
        ans[i+1]=nums[j+n];
        j++;
    }
    return ans;
}