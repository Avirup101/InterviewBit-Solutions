vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> result;
    
    if(A==0){
        return result;
    }
    vector <int> temp;
    temp.push_back(1);
    result.push_back(temp);
    if(A==1){
        return result;
    }    
    vector <int> temp2;
    temp2.push_back(1);
    temp2.push_back(1);
    result.push_back(temp2);
    
    for(int i=2; i<A; i++){
        vector<int> t;
        t.push_back(1);
        for(int j=1; j<i;j++){
            t.push_back(result[i-1][j-1] + result[i-1][j]);
        }
        
        t.push_back(1);
        result.push_back(t);
    }
    return result;
}
