class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size() && k>0 && nums[i] < 0; i++){
            nums[i] = -nums[i];
            k--;
        }
        int mn = nums[0];
        for(int x:nums){
            if( mn > x){
                mn = x;
            }
        }
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(k % 2){
            sum -= 2*mn;
        }
        return sum;
    }
};