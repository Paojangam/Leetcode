class Solution{
public:
    int minFlips(int a,int b,int c){
        int res=0;
        for(int i=0;i<32;i++){
            int x=(a>>i)&1;
            int y=(b>>i)&1;
            int z=(c>>i)&1;
            if(z==0){
                res+=x+y;
            }else{
                if(x==0 && y==0)res++;
            }
        }
        return res;
    }
};


