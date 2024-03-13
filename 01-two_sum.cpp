#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numIndexMap;
        std::vector<int> result(2);
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numIndexMap.find(complement) != numIndexMap.end()) {
                result[0] = numIndexMap[complement];
                result[1] = i;
                return result;
            }
            numIndexMap[nums[i]] = i;
        }
        
        // If no solution found, returning an empty vector
        return {};
    }
};
