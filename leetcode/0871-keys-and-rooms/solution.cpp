class Solution{
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms){
        int n=rooms.size();
    unordered_set<int>visited;
    stack<int>st;
    visited.insert(0);
    st.push(0);
    while(!st.empty()){
        int room=st.top();
        st.pop();
        for(int key:rooms[room]){
            if(!visited.count(key)){
                visited.insert(key);
                st.push(key);
            }
        }
    }
    
  return visited.size()==n;
      
    }
};

