int maxPower(char* s) {
    int l=strlen(s);
    int c =0,max=0;
    for(int i=1;i<l;i++){
        if(s[i-1]==s[i]){
            c++;
            if(c>max) max =c;
        }
        else
            c=0;
    }
    return max+1;
}