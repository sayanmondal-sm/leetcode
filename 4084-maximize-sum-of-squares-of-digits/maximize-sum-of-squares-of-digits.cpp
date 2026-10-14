class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int scores = 0;
        int finalscores = 0;
        string ans = "";
        if(num*9 <sum){
            return "";
        }
               while(sum>0){
             int digit = min(9,sum);
             finalscores += digit*digit;
             ans += char(digit +'0');

             sum -= digit;  
        }
        while(ans.length() < num){
            ans += '0';
        }
        return ans;
    }
};