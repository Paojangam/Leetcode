class Solution {
public:
  bool canShipInDays(const std::vector<int>& weights, int days, int capacity) {
    int currentWeight = 0;
    int daysNeeded = 1;
    for (int w : weights) {
        if (currentWeight + w > capacity) {
            daysNeeded++;
            currentWeight = 0;
        }
        currentWeight += w;
    }
    return daysNeeded <= days;
}

int shipWithinDays(std::vector<int>& weights, int days) {
    int low = *std::max_element(weights.begin(), weights.end());
    int high = std::accumulate(weights.begin(), weights.end(), 0);

    while (low < high) {
        int mid = low + (high - low) / 2;
        if (canShipInDays(weights, days, mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

};
