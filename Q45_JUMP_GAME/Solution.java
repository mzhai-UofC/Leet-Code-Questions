class Solution {
    public int jump(int[] nums) {
        int position=nums.length-1;
        int steps=0;
        while(position>0){
            for(int i=0;i<position;i++){
                if(i+nums[i]>=position){
                    position=i;
                    steps++;
                }
            }
        }
        return steps;
    }
}
//TC:O(N^2)
//SC:O(1)