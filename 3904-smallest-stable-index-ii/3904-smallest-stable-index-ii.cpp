class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>minEle(n);
         minEle[n-1]=nums[n-1];
        for(int i=n-2; i>=0; --i){
            minEle[i]=min(minEle[i+1],nums[i]);
        }
        int maxEle=0;
        for(int i=0; i<n; i++){
             maxEle=max(maxEle,nums[i]);
             if(maxEle-minEle[i] <=k){
                return i;
             }
        }
        
        return -1;
        
    }
};