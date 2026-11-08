class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        double md = 0;
        vector<int>nums3(n+m);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums3.begin());

        sort(nums3.begin(),nums3.end());
        int st = 0, end = nums3.size()-1;
        int mid = st +(end-st)/2;
        if(nums3.size() % 2 == 0){
             md = float((nums3[mid]+nums3[mid+1]))/2;
        }else if(nums3.size() % 2 != 0){
            md = nums3[mid];
        }
        return md;
    }
};