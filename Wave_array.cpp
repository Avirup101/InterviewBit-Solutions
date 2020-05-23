vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(), A.end());
    int n = A.size();
    for(int i=0; i<n; i+=2){ 
        if(i>0 && A[i-1] > A[i] ) 
            swap(A[i], A[i-1]); 

        if(i<n-1 && A[i] < A[i+1] ) 
            swap(A[i], A[i + 1]); 
    } 
    return A;
}
