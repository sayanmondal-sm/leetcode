class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int r = 0;
        int l = 0;
        int length = 0;

        for (int i=0; i<s.size(); i++){
            if(st.find(s[i]) == st.end()){
                st.insert(s[i]);
                r++;
            }else{
                 st.erase(s[l]);
                 l++;
                 i--;
            }
            length = max(length,r-l);
        }
        return length;
    }
};