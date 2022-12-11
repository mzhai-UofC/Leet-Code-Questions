//============================ 2022_12_11 ====================================
//Idea: find target in bi-search, after find the first target, 
//      check its left and right to find if there is a second target
//============================================================================

class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[]res={-1,-1};
        if(nums.length==0){return res;}

        int l=0, r=nums.length-1; //left and right pointer

        //if find target for res[0], continue bi-search to the left  
        while(r>=l){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                res[0]=mid;
                r=mid-1;
            }
            else if(nums[mid]>target){r=mid-1;}
            else if(nums[mid]<target){l=mid+1;}
        }
        //reset pointers
        l=0;
        r=nums.length-1;

        //if find target for res[1], continue bi-search to the right  
         while(r>=l){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                res[1]=mid;
                l=mid+1;
            }
            else if(nums[mid]>target){r=mid-1;}
            else if(nums[mid]<target){l=mid+1;}
        }
        return res;
    }
}

//TC:O(LOGN)
//SC:O(1)