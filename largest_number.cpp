bool validate(int a, int b){
    string aa = to_string(a);
    string bb = to_string(b);
    string original = aa + bb;
    string rev = bb + aa;
    
    if(original > rev){
        return true;
    }
    return false;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<int> result = A;
    
    sort(result.begin(), result.end(), validate);
    
    string ans = "";
    for(int i = 0; i < result.size(); i++){
        ans = ans + to_string(result[i]);
    }
    
    if(ans[0] == '0'){
        return "0";
    }
    
    return ans;
}