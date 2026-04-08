bool isPalindrome(char* s) {
    int len=strlen(s), l=0,r=len-1;
    
    while(l<r){
        if(!isalnum(s[l])) l++;
        else if(!isalnum(s[r])) r--;
        else {
            if(tolower(s[l])!=tolower(s[r])) 
                return false;
            l++;r--;
        }
    }
    return true;
}
