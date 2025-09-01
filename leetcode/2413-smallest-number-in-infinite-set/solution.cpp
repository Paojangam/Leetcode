class SmallestInfiniteSet {
    int cur;
    priority_queue<int, vector<int>, greater<int>> pq;
    unordered_set<int> s;
public:
    SmallestInfiniteSet() {
        cur = 1;
    }
    
    int popSmallest() {
        if(!pq.empty()) {
            int t = pq.top(); pq.pop();
            s.erase(t);
            return t;
        }
        return cur++;
    }
    
    void addBack(int num) {
        if(num < cur && !s.count(num)) {
            pq.push(num);
            s.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */

