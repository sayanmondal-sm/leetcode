class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0; i<n; ++i){
            int maxvalue = nums[i], minvalue = nums[i];
            for(int j=0; j<i; ++j){
                maxvalue = max(maxvalue,nums[j]);
            }
            for(int j=i+1; j<n; ++j){
                minvalue = min(minvalue,nums[j]);
            }
            if(maxvalue-minvalue <= k){
                return i;
            }
        }
        return -1;
    }
};