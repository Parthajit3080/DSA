bool isPalindrome(int x) {
    long n=x,r,sum=0;
    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==x) return true;
    else return false;
}