vector<string> Solution::fizzBuzz(int A) {
    vector<string>res;
        for(int i = 1; i < A + 1; i++){
            string s = to_string(i);
            if(i % 15 ==0) s = "FizzBuzz";
            else if(i % 3 == 0) s = "Fizz";
            else if(i % 5 == 0) s = "Buzz";
            res.push_back(s);
        }
        return res;
    }
 