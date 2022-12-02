public class Solution_cs {
    public int SingleNumber(int[] nums) {
            HashSet<int> set=new HashSet<int>();
        for(int i=0; i<nums.Length; i++)
        {
            if(!set.Add(nums[i])){
                set.Remove(nums[i]);
            }
        }
        return set.First();
    }
}
//TC: O(n)
//SC: O(1)