int maxProfit(int* prices, int pricesSize) {
    int i,j,maxP=0,bestbuy=prices[0];
    for(i=1;i<pricesSize;i++){      
        if(prices[i]>bestbuy)
            maxP= (prices[i]-bestbuy) > maxP? (prices[i]-bestbuy) : maxP;
            
        
        if(prices[i]<bestbuy)
            bestbuy= prices[i];
    }
    return maxP;

}