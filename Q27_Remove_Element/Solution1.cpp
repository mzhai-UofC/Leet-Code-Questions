//=================================2022_12_04=============================================
//set 2 pointer left and right, all begin from 0
//use the right pointer to go through each element in the array
//if the right pointer not equals val, means that is the element should be optput, store the value in the left pointer, left++
//return left when the loop done
//=========================================================================================

class Solution1{
public:
	int removeElement(vector<int>& nums, int val) {
		int n = nums.size();
		int left = 0;
		for (int right = 0; right < n; right++) {
			if (nums[right] != val) {
				nums[left] = nums[right];
				left++;
			}
		}
		return left;
	}
}

//TC:O(N)
//SC:O(1)