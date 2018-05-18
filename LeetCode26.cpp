class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int l=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[l]){
                nums[++l]=nums[i];
            }
        }
        return l+1;
    }
};