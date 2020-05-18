#define mod 1000003

int Solution::findRank(string A) {
    int ans=0;
    int n=A.size();
    long long int fact[n];
    fact[0] = 1;
    for(int i=1;i<n;i++){
        fact[i] = ((fact[i-1]%mod)*(i%mod))%mod;
    }
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[i]){
                c++;
            }
        }   
        ans = (ans + c*(fact[n-i-1])%mod)%mod;
    }
    return (ans+1 )%mod;
}