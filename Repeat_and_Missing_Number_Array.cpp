#define ll long long int
vector<int> Solution::repeatedNumber(const vector<int> &A) {
   ll len = A.size();
    ll sumOfN = (len * (len+1) ) /2, sumOfNsq = (len * (len +1) *(2*len +1) )/6;
    ll m=0, n=0;
    
    for(int i=0;i<A.size(); i++){
       sumOfN -= (ll)A[i];
       sumOfNsq -= (ll)A[i]*(ll)A[i];
    }
    
    m = (sumOfN + sumOfNsq/sumOfN)/2;
    n= m - sumOfN;
    vector <int> ans;
    ans.push_back(n);
    ans.push_back(m);
    return ans;
}