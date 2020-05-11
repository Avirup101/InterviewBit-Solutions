int Solution::titleToNumber(string A) {
    int n=A.size();
    int ans=0,j=0;
    for(int i=n-1;i>=0;i--){
        ans += (A[i]-'A'+1) * pow(26,j);
        j++;
    }
    return ans;
}
