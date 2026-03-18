int pivotInteger(int n) {
    long pivot= 2,sum1=0,sum2=0;
    if(n==1)
        return 1;
    else{
        for(int i=1;i<=n;i++){
            sum1= pivot*(pivot+1)/2;
            sum2 = (n*(n+1) - pivot*(pivot-1))/2;
            if(sum1==sum2)
                return pivot;
            else pivot ++;
        }
        return -1;
    }

}