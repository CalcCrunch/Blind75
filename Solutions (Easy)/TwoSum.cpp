// Solution #1 (brute force)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int sum = nums[i] + nums[j];
                if (sum == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

// O(n^2) time and O(1) space


// Solution #2 (optimal)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (map.find(complement) != map.end()) {
                return {i, map[complement]};
            } else {
                map[nums[i]] = i;
            }
        }
        return {};
    }
};

// O(n) time and O(n) space
