class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int st=1, end = arr.size()-2;
        while(st <= end){
            int mid = st+(end-st)/2;
            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
                for(int i=1; i<mid; i++){
                    if(arr[i-1]>=arr[i]){
                        return false;
                    }
                }
                for(int i=mid+1; i<arr.size(); i++){
                    if(arr[i] >= arr[i-1]){
                        return false;
                    }
                }
                return true;
                
            }else if(arr[mid-1] < arr[mid]){
                    st = mid+1;
            }else{
                    end = mid-1;
                }
        }
        return false;
        
    }
};