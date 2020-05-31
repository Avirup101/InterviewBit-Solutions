int Solution::repeatedNumber(const vector<int> &A) {
    vector <bool> arr(A.size());
    fill(arr.begin(), arr.end(), true);

    for(int i=0;i<A.size();i++){
        if(arr[A[i]]){
            arr[A[i]]=false;
        }
        
        else
            return A[i];
    }
}