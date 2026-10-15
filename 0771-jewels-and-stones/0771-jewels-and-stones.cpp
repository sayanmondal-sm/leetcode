class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char>st;
        int count = 0;
        for(char ch : jewels){
            st.insert(ch);
        }
        for(int i=0; i<stones.size(); i++){
            if(st.find(stones[i]) != st.end()){
                count++;
            }
        }
        return count;
    }
};