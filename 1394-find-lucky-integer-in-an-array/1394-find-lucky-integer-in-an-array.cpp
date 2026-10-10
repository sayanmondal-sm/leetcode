class Solution {
public:
    int findLucky(vector<int>& arr) {
      unordered_map<int,int>m;
      for(int i=0; i<arr.size(); i++){
        m[arr[i]]++;
      }
      int ans = -1;
      for(int i=0; i<arr.size(); i++){
        if(arr[i] == m[arr[i]]){
        ans = max(ans,arr[i]);
      }
      }
       return ans;  
    }
};