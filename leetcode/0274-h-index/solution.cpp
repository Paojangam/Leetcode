class Solution {
public:
    int hIndex(vector<int>& citations) {
     for(int h=citations.size();h>=0;h--){
        int count=0;
        for(int num:citations){
            if(num>=h) count++;
        }
        if(count>=h) return h;
     }
     return 0;
    }
};
