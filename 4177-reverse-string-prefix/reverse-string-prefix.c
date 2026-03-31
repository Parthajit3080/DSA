char* reversePrefix(char* s, int k) {
    int l=0, r=k-1;
    while(l<r){
        int t=s[l];
        s[l]=s[r];
        s[r]=t;
        l++;r--;
    }
    return s;
}