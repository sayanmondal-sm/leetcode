class Solution {
public:
    bool canAliceWin(int n) {
        int stones = 10;
        bool alise_win = false;
        while(stones <= n){
            n -= stones;
            stones--;
            alise_win ^=1;
        }
       return alise_win;
    }
};