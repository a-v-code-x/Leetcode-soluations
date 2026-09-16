// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 0;
        int end = n - 1;
        int ans = 0;

        if (n == 1)
            return 1;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (isBadVersion(mid + 1) == false) {
                start = mid + 1;
            } else {
                ans = mid + 1;
                end = mid - 1;
            }
        }
        return ans;
    }
};