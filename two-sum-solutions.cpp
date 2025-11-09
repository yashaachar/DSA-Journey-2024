// Day 1: Two Sum Solutions
// Solved with both brute force and optimized approaches

#include <vector>
#include <unordered_map>
using namespace std;

// BRUTE FORCE APPROACH - O(n^2)
class SolutionBrute {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

// OPTIMIZED HASH MAP APPROACH - O(n)
class SolutionOptimized {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if(numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }
        return {};
    }
};
