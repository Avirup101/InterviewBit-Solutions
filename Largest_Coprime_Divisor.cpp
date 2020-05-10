int gcd(int x,int y){
    int m=x>y?x:y;
    int n=x>y?y:x;
    while(n!=0){
        int rem=m%n;
        m=n;
        n=rem;
    }
    return m;
}

int Solution::cpFact(int A, int B) {
    while(gcd(A,B)!=1){
        A=A/gcd(A,B);
    }
    return A;
}
