int Solution::maxSubArray(const vector<int> &A) {
    int n = A.size();
    int ans = A[0];
    int curr = A[0];
    for(int i=1;i<n;i++){
        curr = max(curr+A[i] , A[i]);
        ans = max(ans, curr);
    }
    return ans;
}
