/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize=2;
    int* ans=malloc(sizeof(int)*2);
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            int sum= nums[i]+nums[j];
            if(sum==target){
                ans[0]=i;
                ans[1]=j;
                return ans;
            }
        }
    }
    return NULL;
}