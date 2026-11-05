class Solution {
public:
    bool isValid(int n,vector<int>& arr,int d){
        for(int i=0; i<arr.size(); i++){
            if(abs(arr[i]-n) <= d){
                return false;
            }
        }
        return true;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for(int i=0; i<arr1.size(); i++){
            if(isValid(arr1[i],arr2,d)){
                count++;
            }
        }
        return count;
    }
};