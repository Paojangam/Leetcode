class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> taskCount;
        for(char task:tasks){
            taskCount[task]++;
        }
        priority_queue<int> maxHeap;
        for(auto entry: taskCount){
            maxHeap.push(entry.second);
        }
        int cycles=0;
        while(!maxHeap.empty()){
            vector<int>temp;
            int time=0;
            for(int i=0;i<=n;i++){
                if(!maxHeap.empty()){
                    temp.push_back(maxHeap.top()-1);
                    maxHeap.pop();
                    time++;

                }
            }
            for(int t:temp){
                if(t>0){
                    maxHeap.push(t);
                }
            }
            cycles +=maxHeap.empty()? time:(n+1);
        }
        return cycles;
   
    }
};
