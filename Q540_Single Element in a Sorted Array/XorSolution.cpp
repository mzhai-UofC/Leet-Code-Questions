class XorSolution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int singleNum = 0;
        for(int num:nums){
            singleNum^=num;
        }
        return singleNum;
    }
};
 