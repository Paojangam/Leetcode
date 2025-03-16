class Solution {
public:
    int largestAltitude(vector<int>& gain) {
     int currentAltitute=0;
     int maxAltitute=0;
     for(int i=0;i<gain.size();i++){
        currentAltitute+=gain[i];
        maxAltitute=max(currentAltitute,maxAltitute);
     }
     return maxAltitute;
     
    }
};
