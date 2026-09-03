class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        for(int i=0; i<nums.size(); ++i){
            sum += min(nums[i],nums[++i]);
        }
        return sum;
    }
};