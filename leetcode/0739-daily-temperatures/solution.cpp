class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        vector<int>answers (n,0);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && t[i]>t[st.top()]){
                int ind=st.top();
                st.pop();
                answers[ind]=i-ind;
            }
            st.push(i);
        }
        return answers;
    }
};

