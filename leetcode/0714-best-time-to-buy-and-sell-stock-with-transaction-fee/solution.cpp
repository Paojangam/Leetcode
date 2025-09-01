class Solution{
public:
    int maxProfit(vector<int> &p,int f){
        int n=p.size();
        long hold=-p[0],cash=0;
        for(int i=1;i<n;i++){
            cash=max(cash,hold+p[i]-f);
            hold=max(hold,cash-p[i]);
        }
        return cash;
    }
};

