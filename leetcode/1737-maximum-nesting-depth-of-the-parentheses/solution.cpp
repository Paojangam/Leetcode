class Solution {
public:
    int maxDepth(string s) {
       int depth=0;
       int max_depth=0;
       for(char ch: s){
        if(ch=='('){
            depth++;
            max_depth=max(max_depth,depth);
        } else if(ch==')'){
            depth--;
             max_depth=max(max_depth,depth);

        }else{
            continue;
        }
       } 
        return max_depth;
    }
};
