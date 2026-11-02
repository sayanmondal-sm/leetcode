class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int moves = 0;
        sort(nums.begin(),nums.end());
        int mean = nums[n/2];
        for(int n : nums){
            moves += abs(mean-n);
        }
        return moves;
    }
};