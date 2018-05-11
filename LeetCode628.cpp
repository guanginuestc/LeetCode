#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
#include<minmax.h>
using namespace std;
int maximumProduct(vector<int>& nums) {
    int len = nums.size();
    sort(nums.begin(), nums.end());
    return max(nums[len-1] * nums[len-3] * nums[len-2],nums[len-1]*nums[0]*nums[1]);
}

void main() {
    string s = "AB";
    vector<int> i = { -4,-3,-2,-1,60 };
    //s = maximumProduct(i);
    cout<< maximumProduct(i) << endl;

}