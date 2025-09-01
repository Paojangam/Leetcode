class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.empty()) return 0;
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b){return a[1]<b[1];});
        int end = intervals[0][1], cnt = 0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<end) cnt++;
            else end = intervals[i][1];
        }
        return cnt;
    }
};

