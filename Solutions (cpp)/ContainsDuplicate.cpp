// Solution #1 (brute force)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};

// O(n^2) time and O(1) space


// Solution #2 (non-optimal)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }
        return false;
    }
};

// O(nlogn) time and O(1) space


// Solution #3 (optimal)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for (int num : nums) {
            if (set.count(num)) {
                return true;
            } else {
                set.insert(num);
            }
        }
        return false;
    }
};

// O(n) time and O(n) space


// Solution #4 (optimal)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for (int num : nums) {
            if (set.find(num) != set.end()) {
                return true;
            } else {
                set.insert(num);
            }
        }
        return false;
    }
};

// O(n) time and O(n) space


// Solution #5 (optimal)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for (int num : nums) {
            if (set.insert(num).second == false) {
                return true;
            }
        }
        return false;
    }
};

// O(n) time and O(n) space


// Solution #6 (optimal)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() != unordered_set<int>(nums.begin(), nums.end()).size();
    }
};

// O(n) time and O(n) space
