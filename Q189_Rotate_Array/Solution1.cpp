//=======================2022_12_03==================================================
//create a new array to store the rotated array
//go through all the elements in the original array, 
//    put the original element stored in nums[n] to the newArray[(1+k)mod n]
//copy the original array's elements in the new order and sort.
//===================================================================================
class Solution1{
	public:
		void rotate(vector<int>& nums, int k) {
			int n = nums.size();
			vector<int> newArr(n);
			for (int i = 0; i < n; ++i) {
				newArr[(i + k) % n] = nums[i];
			}
			nums.assign(newArr.begin(), newArr.end());
		}
};

//TC:O(n)
//SC:O(n)