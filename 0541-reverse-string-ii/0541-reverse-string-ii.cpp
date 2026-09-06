class Solution {
public:
    string reverseStr(string s, int k) {
      for(int st=0; st<s.length(); st+=2*k){
        int end = min(st+k-1,(int)s.length()-1);

        reverse(s.begin()+st,s.begin()+end+1);

      }
        return s;
        
    }
};