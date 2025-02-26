class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
    int time = 0;  // Total time counter

    for (int i = 0; i < tickets.size(); i++) {  // Loop through all people
        if (i <= k)  // If person is before or at k, count full tickets
            time += min(tickets[i], tickets[k]);
        else  // If person is after k, they can only buy up to tickets[k] - 1
            time += min(tickets[i], tickets[k] - 1);
    }

    return time;  // Return total time taken for person `k`
}

};
