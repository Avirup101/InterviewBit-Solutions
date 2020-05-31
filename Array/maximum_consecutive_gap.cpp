int Solution::maximumGap(const vector<int> &A) {
    if(A.size() < 2) return 0;
    vector<int> temp;
    for(auto it: A){
        temp.push_back(it);
    }
    int maxD = INT_MIN;
    sort(temp.begin(), temp.end());
    for(int i=0;i<temp.size()-1;i++){
        if((temp[i+1] - temp[i]) > maxD) maxD =  (temp[i+1] - temp[i]);   
    }
    return maxD;
    
}
