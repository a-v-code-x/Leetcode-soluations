class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int res = 0;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (nums[mid] < target) {
                res = mid + 1;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return res;
    }
};