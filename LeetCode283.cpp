
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        for(;i<nums.size();i++){
            if(nums[i]){
                nums[j]=nums[i];
                j++;
            }
        }
        for(;j<nums.size();j++){
            nums[j]=0;
        }
        
    }