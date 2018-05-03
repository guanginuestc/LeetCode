#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> temp_nums(nums);
    sort(nums.begin(), nums.end());
    int i = 0, j = nums.size()-1,temp=0;
    vector<int> result;
    while (i < j) {
        temp = nums[i] + nums[j];
        if (temp == target) {
            result.push_back(&*find(temp_nums.begin(),temp_nums.end(),nums[i])-&temp_nums[0]);
            temp_nums[result.back()] = -1;
            result.push_back(&*find(temp_nums.begin(), temp_nums.end(), nums[j]) - &temp_nums[0]);
            return result;
        }
        else if (temp < target) {
            i++;
        }
        else if (temp > target) {
            j--;
        }
    }
    return result;
}
void main() {
    vector<int> temp = { 3,2,4 };

    temp= twoSum(temp,6);
}