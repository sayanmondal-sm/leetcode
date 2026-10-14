class Solution {
public:
     int totalDigit(int n){
        int count = 0;
        while(n>0){
        int digit = n%10;
        count++;
        n = n/10;
    }
    return count;
    }
    int digitSum(int n){
        int sum = 0;
        while(n>0){
        int digit = n%10;
        sum += digit;
        n = n/10;   
    }
    return sum;
    }
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