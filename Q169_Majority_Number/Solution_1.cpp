class Solution_1 {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return(nums[nums.size()/2]);
    }
};