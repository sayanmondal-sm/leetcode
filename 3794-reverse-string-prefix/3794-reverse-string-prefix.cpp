class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = s.length();
        if(k > n){
            return s;
        }
        int st = 0;
        int end = st+k-1;
        while(st < end){
            char temp = s[st];
            s[st] = s[end];
            s[end] = temp;
            st++,end--;
        }
        return s;
    }
};