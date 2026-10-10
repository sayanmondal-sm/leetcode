class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        vector<int>n1;
        vector<int>n2;
        for(int i=0; i<n; i++){
            n1.push_back(nums[i]);
        }
        for(int i=n; i<nums.size(); i++){
            n2.push_back(nums[i]);
        }
        for(int i=0; i<n1.size(); i++){
                ans.push_back(n1[i]);
                ans.push_back(n2[i]);
            
        }
        return ans;
    }
};