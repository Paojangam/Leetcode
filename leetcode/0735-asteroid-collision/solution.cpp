class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int s: asteroids){
            bool destroyed=false;
            while(!st.empty() && st.top()>0  && s<0){
                if(st.top()<-s){

                    st.pop();
                    continue;
                }else if(st.top()==-s){
                    st.pop();
                    destroyed= true;
                    break;
                }else{
                    destroyed=true;
                    break;
                }
                
                }if(!destroyed){
                    st.push(s);
                    }
            }

            vector<int> result(st.size());
            for(int i=st.size()-1;i>=0;i--){
                result[i]=st.top();
                st.pop();
            }
        
        return result;
    }
};
