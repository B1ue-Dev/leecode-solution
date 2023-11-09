class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1; // fix the bug by subtracting 1 from nums.size()
        if (nums.size() == 1) {
            if (nums[0] == target) {
                return 0;
            }
            else {
                return -1;
            }
        }
        while (low <= high) {
            int mid = low + ((high - low) >> 1); // use bit shifting instead of division
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                low = (mid << 1) + 1; // use bit shifting instead of addition
            }
            else if (nums[mid] > target) {
                high = (mid << 1) - 1; // use bit shifting instead of subtraction
            }
        }
        return -1;
    }
};
