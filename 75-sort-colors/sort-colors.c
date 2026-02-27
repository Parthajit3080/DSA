void sortColors(int* nums, int numsSize) {
    int a=0,b=0,c=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0) a++;
        else if(nums[i]==1) b++;
        else c++;
    }
    int j=0;
    for(int i=0;i<a;i++){
        nums[j++]=0;
    }
    for(int i=0;i<b;i++){
        nums[j++]=1;
    }
    for(int i=0;i<c;i++){
        nums[j++]=2;
    }
}