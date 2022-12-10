//=================2022_12_10===================
// Idea: select the far most position (maxPos) that can jump to, from 
// the intervals of jumpming steps last time
  
class Solution {
public:
    int jump(vector<int>& nums) {
        int maxPos=0;   //the far most position that can jump to
	n=nums.size();
	end=0;	        //right interval of last jump
	step=0;		//jump num

        for(int i=0;i<n-1;++i){
            if(maxPos>=i){

                maxPos=max(maxPos, i+nums[i]);// reach the right interval from the jump steps last time
		
                if(i==end){
                    end=maxPos; //the postion for next jump start
                    ++step;
                }
            }
        }
        return step;
    }
};

//TC:O(N)
//SC:O(1)