class Solution {
public:
    bool judgeCircle(string moves) {
        int r=0;
        int l=0;
        int d=0;
        int u=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='R') {r++;
            }else if(moves[i]=='L'){
                l++;
            }else if(moves[i]=='D'){
                d++;
            }else if(moves[i]=='U'){
                u++;
            }
        } if(r==l && d==u){
            return true;
        }
        return false;
        
    }
};
