#define mod 1000003

long long power(long long A, long long B){
    if(A == 0) return 0;
    if(B == 0) return 1;
    long result;
    if(B%2 ==0){
        result = power(A, B/2);
        result = (result * result) % mod;
    }
    else{
        result = A % mod;
        result = (result * power(A, B-1)%mod) % mod;
    }
    return result % mod;
}


int Solution::findRank(string A) {
    int ans=0;
    int n=A.length();
    long long int fact[n];
    fact[0] = 1;
    for(int i=1;i<n;i++){
        fact[i] = ((fact[i-1]%mod)*(i%mod))%mod;
    }
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[i])
                c++;
        }
    
        map<char, int> m;
        for(int k=i;k<n;k++){
            m[A[k]]++;
        }
        long long int d =1;
        for(auto it: m){
            d = ((d%mod) * (fact[it.second]%mod))%mod;    
        
        }    
        ans+=c*((fact[n-i-1]%mod * power(d, mod-2))%mod)%mod;
    }
    return (ans+1 )%mod;
}