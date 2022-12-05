//=======================2022_12_04==================================================
// 
// Bisection Method
// 
//main idea: find the k th smallest element, we should compare pivot1 = nums1[k/2-1] and pivot2 = nums2[k/2-1]
// 
//elements in nums1 smaller or equal than pivot1: nums1[0 .. k/2-2] 
//elements in nums2 smaller or equal than pivot2: nums2[0 .. k/2-2] 
// 
//if pivot = pivot1，then nums1[0 ..k / 2 - 1] couldn't be the k th smallest elements, delet these elements and use the lefts as the new nums1 array
//if pivot = pivot2，then nums1[0 ..k / 2 - 1] couldn't be the k th smallest elements, delet these elements and use the lefts as the new nums2 array
//because we have deleted some elements, so we should update the k value (minus the deleted elements' number)
//==================================================================================

class Solution {
public:
    int getKthElement(const vector<int>& nums1, const vector<int>& nums2, int k) {

        int m = nums1.size();
        int n = nums2.size();
        int index1 = 0, index2 = 0;

        while (true) {
            // 2 special cases
            if (index1 == m) {
                return nums2[index2 + k - 1];
            }
            if (index2 == n) {
                return nums1[index1 + k - 1];
            }
            if (k == 1) {
                return min(nums1[index1], nums2[index2]);
            }

            //normal cases
            int newIndex1 = min(index1 + k / 2 - 1, m - 1);
            int newIndex2 = min(index2 + k / 2 - 1, n - 1);

            int pivot1 = nums1[newIndex1];
            int pivot2 = nums2[newIndex2];

            if (pivot1 < pivot2) {
                k -= newIndex1 - index1 + 1;
                index1 = newIndex1 + 1;
                index1 = newIndex1 + 1;
            }

            else {
                k -= newIndex2 - index2 + 1;
                index2 = newIndex2 + 1;
            }
        }
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int totalLength = nums1.size() + nums2.size();
        if (totalLength % 2 == 1) {
            return getKthElement(nums1, nums2, (totalLength + 1) / 2);
        }
        else {
            return (getKthElement(nums1, nums2, totalLength / 2) + getKthElement(nums1, nums2, totalLength / 2 + 1)) / 2.0;
        }
    }
};

//TC:O(log(m+n)), m and n stands for the length of nums1 and nums2
//SC:O(1)