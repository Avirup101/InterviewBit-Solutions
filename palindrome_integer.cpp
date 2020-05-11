int Solution::isPalindrome(int A) {
    int temp = A;
    int rev = 0;
    while(A>0){
        int rem = A % 10;
        rev = rev*10 + rem;
        A /= 10;
    }
    
    if(rev == temp) return true;
    else return false;
    
}
