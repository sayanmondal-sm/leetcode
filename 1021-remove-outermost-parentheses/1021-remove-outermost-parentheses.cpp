class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string ans = "";
        for(int p: s){
             if(p == ')'){
                count--;
            }
             if(count >0){
            ans.push_back(p);
           }
            if(p == '('){
                count++;
            }
        }
        return ans;
    }
};