class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
        int i=0;
        while(i<n-1){
            if(bits[i]==0){
                i+=1;
            }else if(bits[i]==1){
                i+=2;
            }
        }
       return n-1==i; 
    }
};
