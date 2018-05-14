#include <iostream>
#include<string>
#include<windows.h>
#include<vector>
using namespace std;

int findMin(vector<int>& nums) {
	for (int i = 0; i < nums.size()-1; i++) {
		if (nums[i] > nums[i + 1]) {
			return nums[i + 1];
		}
	}
	return nums[0];
}