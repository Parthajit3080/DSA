/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* ans=malloc(sizeof(int)*(right-left+1));
    int r,k=0;
    for(int i=left;i<=right;i++){
        int c=0,n=i;
        while(n>0){
            r=n%10;
            if(r==0)
                c=1;
            else if(i%r!=0)
                c=1;
            n=n/10;
        }
        if(c==0) ans[k++]=i;
    }
    *returnSize = k;
    return ans;
}