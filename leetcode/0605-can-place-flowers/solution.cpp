class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        
        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0) { 
                // Check if the previous and next plots are empty or out of bounds
                bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);
                bool rightEmpty = (i == size - 1 || flowerbed[i + 1] == 0);

                if (leftEmpty && rightEmpty) { 
                    flowerbed[i] = 1; // Plant the flower
                    n--; // Reduce the required count
                    if (n == 0) return true; // Early termination
                }
            }
        }
        
        return n <= 0; // If all flowers are planted, return true
    }
};

