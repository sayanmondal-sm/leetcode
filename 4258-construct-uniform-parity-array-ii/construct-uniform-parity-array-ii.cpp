class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = nums1[0];
        for(int i:nums1){
            if(i<mn){
                mn=i;
            }
            }
            for(int i:nums1){
                if(mn%2 == 0 && i%2 == 1){
                    return false;
                }
            }
        return true;
    }
};