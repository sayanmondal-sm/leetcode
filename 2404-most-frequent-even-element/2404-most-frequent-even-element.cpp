class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans =-1;
        int maxFreq = 0;
        unordered_map<int,int>m;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 == 0){
                m[nums[i]]++;

                if(m[nums[i]] > maxFreq){
                    maxFreq = m[nums[i]];
                    ans = nums[i];
                }else if(m[nums[i]] == maxFreq){
                    ans = min(ans, nums[i]);
                }
            }
        }
        return ans;
    }
};