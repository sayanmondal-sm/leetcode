class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        vector<pair<int, int>>A,B;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(img1[i][j] == 1){
                    A.emplace_back(i,j);
                }
                 if(img2[i][j] == 1){
                    B.emplace_back(i,j);
                }
            }
        }
        unordered_map<int,int>freq;
        int maxOverlap = 0;
        for(auto a:A ){
            for(auto b:B){
                int dx = b.first - a.first;
                int dy = b.second - a.second;
                int key = dx*100 + dy;
                freq[key]++;
                maxOverlap = max(maxOverlap, freq[key]) ;
            }
        }
        return maxOverlap;
    }
};