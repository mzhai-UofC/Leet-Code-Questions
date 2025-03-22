class TwoPointersSolution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int size = nums.size();
        for(int i = 0; i<size-1; i+=2){
            if(nums[i] != nums[i+1]){
                return nums[i];
            }
        }
        return nums[size-1];
    }
};