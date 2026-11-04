class Solution {
public:
    int findMin(vector<int>& nums) {
        int mn = nums[0];
        int st = 0, end = nums.size()-1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(nums[st] <= nums[end]){
                mn = min(mn,nums[st]);
                break;
            }
            if(nums[mid] < mn){
                mn = nums[mid];
            }
            if(nums[mid] >= nums[st]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return mn;
    }
};