/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingAndRepeatedValues(int** grid, int gridSize, int* gridColSize, int* returnSize) {
    int n=gridSize;
    int total=n*n;
   
    int freq[total + 1];   // +1 for index = total
    // Initialize to 0
    for(int i = 0; i <= total; i++)
        freq[i] = 0;

    int * ans=(int*)malloc(2*sizeof(int)); // ans[a,b]

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            freq[grid[i][j]]++;
    }

    for(int i=1;i<=total;i++){
        if(freq[i]==2) ans[0]=i;
        if(freq[i]==0) ans[1]=i;
    }

    *returnSize=2;
    return ans;
}