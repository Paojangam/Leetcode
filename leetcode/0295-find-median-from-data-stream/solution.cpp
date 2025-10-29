class MedianFinder {
public:
    priority_queue<int>left;
    priority_queue<int,vector<int>,greater<int>>right;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        left.push(num);
        int leftTop=left.top();
        left.pop();
        right.push(leftTop);
        if(right.size()>left.size()){
            int rightTop=right.top();
            right.pop();
            left.push(rightTop);
        }
        
    }
    
    double findMedian() {
        if(left.size()>right.size()){
            return static_cast<double>(left.top());
        }else{
            return ( (static_cast<double>(left.top())+static_cast<double>(right.top()))/2.0);
        }
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
