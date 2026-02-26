int maxArea(int* height, int heightSize) {
    int n=heightSize,l=0,r=n-1;
    int h,w,amount,maxWater=0;;
    while(l<r){
        w=r-l;
        h=height[r]>height[l]?height[l]:height[r];
        amount= w*h;
        maxWater= maxWater>amount?maxWater:amount;

        if(height[r]>height[l])
            l++;
        else
            r--;
    }
    return maxWater;
}