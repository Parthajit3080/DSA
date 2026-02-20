int majorityElement(int* nums, int numsSize) {
   int i,freq=0,ans=0;
   for(i=0;i<numsSize;i++){
        if(freq==0) 
            ans=nums[i];
        
        if(ans==nums[i]) 
            freq++;
        else 
            freq--;
   }
   return ans;
};