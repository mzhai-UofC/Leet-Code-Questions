class Solution_cpp {
public:
    int singleNumber(vector<int>& nums) {
        int count=1;
        unordered_map<int, int>table;
        for(auto n:nums){
            ++table[n];
            
            }
        for(auto c:table){
            if(c.second==1){
                return c.first;
            }
        }
      return -1;
    }
};

//TC: O(n)
//SC: O(1)
