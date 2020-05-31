int Solution::firstMissingPositive(vector<int> &A) {
    int n = A.size();
    int j = 0;
    for(int i =0;i<n;i++){
        if(A[i]<=0){
            swap(A[j],A[i]);
            j++;
        }
    }
    int start = j;
    int count = n-start;
    
    for(int i = start;i<n;i++){
        if(abs(A[i]) <= count){
            A[start+abs(A[i])-1] = -abs(A[start+abs(A[i])-1]);
        }
    }
    
    for(int i = start;i<n;i++){
        if(A[i]>=0){
            return (i-start+1);
        }
    }
    
    return (count+1);
}