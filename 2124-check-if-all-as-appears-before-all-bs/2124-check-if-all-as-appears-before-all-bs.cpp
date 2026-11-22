class Solution {
public:
    bool checkString(string s) {
        auto t = s;

        sort(t.begin(),t.end());

        if(t==s){
            return true;
        }
        return false;
    }
};