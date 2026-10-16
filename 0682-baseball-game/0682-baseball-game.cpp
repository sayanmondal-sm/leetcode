class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int>st;
        int total = 0;
        for(int i=0; i<op.size(); i++){
            if(!st.empty() && op[i] == "C"){
                st.pop();
            }else if(op[i] == "D"){
                st.push(st.top() * 2);
            }else if(op[i] == "+"){
                int firstTop = st.top();
                st.pop();
                int secondTop = st.top();
                int sum = firstTop + secondTop;
                st.push(firstTop);
                st.push(sum);
            }else{
                st.push(stoi(op[i]));
            }
        }
        while(!st.empty()){
            total += st.top();
            st.pop();
        }
        return total;
    }
};