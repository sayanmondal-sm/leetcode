class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int sum = n*(n+1)/2;
        int currSum = 0;
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                ans.push_back(nums[i]);
            }
        }
        for(int i=0; i<nums.size(); i++){
            currSum += nums[i];
        }
        int res = sum-currSum +ans[0];
        ans.push_back(res);
        return ans;
    }
};