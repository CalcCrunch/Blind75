// Solution #1 (brute force)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        for (int i = 0; i < prices.size() - 1; i++) {
            for (int j = i + 1; j < prices.size(); j++) {
                ans = max(ans, prices[j] - prices[i]);
            }
        }
        return ans;
    }
};

// O(n^2) time and O(1) space


// Solution #2 (optimal)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, minPrice = INT_MAX;
        for (int price : prices) {
            minPrice = min(minPrice, price);
            ans = max(ans, price - minPrice);
        }
        return ans;
    }
};

// O(n) time and O(1) space
