double myPow(double x, int n) {
    double ans=1;
    long binary=n;
    if(n<0){
        x=1/x;
        binary=-binary;
    }
        
    while(binary>0){
        if(binary%2==1)
            ans*=x;
        
        binary/=2;
        x=x*x;
    }

    return ans;
}