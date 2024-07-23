#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        // Find the maximum number of candies any kid has
        int maxCandies = *std::max_element(candies.begin(), candies.end());

        // Create a result vector to store the boolean values
        std::vector<bool> results;
        results.reserve(candies.size());

        // Determine if each kid can have the greatest number of candies
        for (int candy : candies) {
            if (candy + extraCandies >= maxCandies) {
                results.push_back(true);
            } else {
                results.push_back(false);
            }
        }

        return results;
    }
};
