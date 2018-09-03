class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int beg = 0, end = nums.size()-1;
    
        while (beg < end)
        {
            int mid = (beg + end) / 2;
            if (mid == 0)
            return nums[0] > nums[1] ? 0 : 1;
            if (mid == end)
            {
                return nums[end] > nums[end-1] ? end : end-1;
            }
            if (nums[mid] > nums[mid -1] && nums[mid] > nums[mid + 1])
            return mid;
            else if (nums[mid] < nums[mid + 1])
            beg = mid + 1;
            else if (nums[mid] < nums[mid - 1])
            end = mid - 1;
        }
        
        return beg;
    }
};