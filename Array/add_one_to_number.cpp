vector<int> Solution::plusOne(vector<int> &A) {
       vector <int> result;
       vector <int> final;
       int n = A.size();
       int carry = 1;
       
       for(int i=n-1;i>=0;i--){
           int curr = A[i] + carry;
           carry = curr / 10;
           result.push_back(curr%10);
       }
       if(carry>0){
           result.push_back(carry);
       }
       for(int i= result.size()-1; i>=0; i--){
           final.push_back(result[i]);
       }
       if(final.begin() == 0){
           final.remove(final.begin());
       }
       return final;
}
