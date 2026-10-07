class Solution {
public:
    bool isPalindrome(const string& s, int i, int j){
        while(i < j){
            if(s[i] != s[j]){
                return false; 
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        string ans = "";

        if(s.size() == 1){
            return s;
        }
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                if(isPalindrome(s,i,j)){
                    if(j-i+1 > ans.size()){
                        ans =s.substr(i, j-i+1);
                    }
                }
            }
        }
        return ans;
    }
};