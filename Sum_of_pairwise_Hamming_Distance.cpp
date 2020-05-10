int Solution::hammingDistance(const vector<int> &A) {
    vector<int> arr(32, 0);
    for(int i=0;i<A.size();i++){
        int num = A[i];
        int id = 0;
        while(num>0){
            arr[id] += (num & 1);
            id++;
            num = num >> 1;
        }
    }
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans += 2*(arr[i] * (A.size() - arr[i]));
    }
    return ans%1000000007;
    
}
