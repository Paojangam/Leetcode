class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        // Function to compute the marginal gain of adding one student
        auto delta = [](int p, int t) {
            long long T = t;  // promote to 64-bit
            return (double)(t - p) / (T * (T + 1));
        };

        // Max-heap (priority_queue): stores {gain, passes, total}
        priority_queue<tuple<double,int,int>> pq;
        for (auto& c : classes) {
            pq.push({delta(c[0], c[1]), c[0], c[1]});
        }

        // Greedily assign each extra student
        while (extraStudents--) {
            auto [d, p, t] = pq.top(); 
            pq.pop();
            p += 1;  // one more guaranteed pass
            t += 1;  // one more total student
            pq.push({delta(p, t), p, t}); // push back with updated delta
        }

        // Compute final average ratio
        double total = 0.0;
        while (!pq.empty()) {
            auto [d, p, t] = pq.top();
            pq.pop();
            total += (double)p / t;
        }
        return total / classes.size();
    }
};

