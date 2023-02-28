// Solution #1 (brute force)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

// O(nlogn) time and O(1) space


// Solution #2 (optimal)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> map;
        for (auto &c : s) {
            ++map[c];
        }
        for (int i = 0; i < t.length(); i++) {
            if (--map[t[i]] < 0) {
                return false;
            }
        }
        return true;
    }
};

// O(n) time and O(1) space


// Solution #3 (optimal)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int counts[26] = {};
        for (auto &c : s) {
            ++counts[c - 'a'];
        }
        for (int i = 0; i < t.length(); i++) {
            if (--counts[t[i] - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};

// O(n) time and O(1) space
