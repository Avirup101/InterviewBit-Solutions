int Solution::gcd(int m, int n) {
    if (m == 0) 
       return n; 
    if (n == 0) 
       return m; 
 
    if (m == n) 
        return m; 

    if (m > n) 
        return gcd(m-n, n); 
    return gcd(m, n-m);
    
}
