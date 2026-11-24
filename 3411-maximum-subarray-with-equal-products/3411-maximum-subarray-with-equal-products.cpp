class Solution {
public:
    int maxLength(vector<int>& arr) {
        int ans = 0;

        if(arr.size() == 1){
            return arr.size();
        }

        for(int l=0; l<arr.size(); l++){
            long long prod = arr[l];
            long long lcm_arr = arr[l];
            long long gcd_arr = arr[l];

             for(int r=l+1; r<arr.size(); r++){
                prod = prod * arr[r];
                lcm_arr = lcm(lcm_arr,arr[r]);
                gcd_arr = gcd(gcd_arr,arr[r]);

                if (prod > gcd_arr * lcm_arr) {
                    break;
                }

                if(prod == lcm_arr * gcd_arr){
                ans =  max(r - l + 1, ans);
               }  
            }
        }
        return ans;
    }
};