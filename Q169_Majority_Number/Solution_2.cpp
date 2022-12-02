class Solution_2 {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>table;
        
        int count=0, maj=0;
        for (int n: nums){
            ++table[n];
            
            if(count<table[n]){
                count=table[n];
                maj=n;
            }
        }        
        return maj;
    }
};