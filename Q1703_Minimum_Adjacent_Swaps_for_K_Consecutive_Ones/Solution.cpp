class Solution {
public:
    using ll = long long;
    int minMoves(vector<int>& nums, int k) {
        queue<int> q1;
        queue<int> q2;
        ll sum1 = 0;
        ll sum2 = 0;
        int size = nums.size();
        ll ans = INT_MAX;
        if (k == 1) {
            return 0;
        }
        for (int i = 0; i < size; ++i) {
            if (nums[i] == 0) {
                continue;
            }
            if (q1.size() < k / 2) {
                q1.push(i);
                sum1 += i;
            } else if (q2.size() < k - k / 2) {
                q2.push(i);
                sum2 += i;
            }
            if (q1.size() + q2.size() == k) {
                ll mid = q2.front();
                ans = min(ans, (ll)((mid - q1.size() + mid - 1) * q1.size() / 2 - sum1 + sum2 - (mid + mid + q2.size() - 1) * q2.size() / 2));
                sum1 -= q1.front();
                q1.pop();
                q1.push(q2.front());
                sum1 += q2.front();
                sum2 -= q2.front();
                q2.pop();
            }
        }
        return ans;
    }
};