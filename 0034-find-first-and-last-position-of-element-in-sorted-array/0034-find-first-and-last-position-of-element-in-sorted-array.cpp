class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
          int start = 0;
        int end = nums.size() - 1;
        vector<int> ans;
        int res = -1;
        // first occurance
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                res = mid;
                end = mid - 1;
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = start + 1;
            }
        }
        ans.push_back(res);
        // lastoccurance
        start = 0;
        end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                res = mid;
                start = mid + 1;
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = start + 1;
            }
        }
        ans.push_back(res);
        return ans;
    
    }
};