#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
vector<int> twoSum(vector<int> nums, int target) {
    sort(nums.begin(), nums.end());
    int i = 0, j = nums.size() - 1, temp = 0;
    vector<int> result;
    while (i < j) {
        temp = nums[i] + nums[j];
        if (temp == target) {
            result.push_back(nums[i]);
            result.push_back(nums[j]);
            i++;
            j--;
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
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<int> temp=nums;
    vector<int> topush,t1;
    vector<vector<int>> result;
    vector<vector<int>>::iterator it;
    set<vector<int>> sets;
    for (int i = 0; i < nums.size(); i++) {
        if (temp.size() < 2) {
            break;
        }
        temp.erase(temp.begin());
        topush = twoSum(temp, 0-nums[i]);
        
        for (int m = 0; m < topush.size(); m+=2) {
            
            
            t1.clear();
            t1.push_back(topush[m]);
            t1.push_back(topush[m + 1]);
            t1.push_back(nums[i]);
            sort(t1.begin(), t1.end());
            sets.insert(t1);
            //it = find(result.begin(), result.end(), t1);
            /*if (it == result.end()) {
                result.push_back(t1);
            }*/
        }


    }
    for (set<vector<int>>::iterator i = sets.begin(); i != sets.end(); i++)
        result.push_back(*i);
    return result;
}
void main() {
    vector<int> temp = { 0,-4,-1,-4,-2,-3,2 };
    vector<vector<int>> xxx;
    xxx = threeSum(temp);
}