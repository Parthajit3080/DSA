bool isPalindrome(int x) {
    long s=0,n;
    n=x;
    while(x>0){
        long r= x%10;
        s=s*10+r;
        x=x/10;
    }
    if(n==s)
        return true;
    else
        return false;
}