// Solution #1 (brute force)
class Solution {
public:
    bool isPalindrome(string s) {
        string filtered, reversed;
        for (auto &ch : s) {
            if (isalnum(ch)) {
                filtered += tolower(ch);
            }
        }
        reversed.resize(filtered.size());
        reverse_copy(filtered.begin(), filtered.end(), reversed.begin());
        return filtered == reversed;
    }
};

// O(n) time and O(n) space


// Solution #2 (optimal)
class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            while (i < j && !isalnum(s[i])) {
                ++i;
            }
            while (i < j && !isalnum(s[j])) {
                --j;
            }
            if (i < j && tolower(s[i++]) != tolower(s[j--])) {
                return false;
            }
        }
        return true;
    }
};

// O(n) time and O(1) space
