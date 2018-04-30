#include<iostream>
#include<vector>
#include<minmax.h>
using namespace std;

class NumArray {
private:
    vector<int> num1;
public:
    
    NumArray(vector<int> nums) {
        int temp = 0;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
            temp += *it;
            num1.push_back(temp);
        }
    }

    int sumRange(int i, int j) {
        return num1[j] - num1[i - 1];
    }
};
void main() {
    vector<int> cost = { 1, 100, 1, 1, 1, 100, 1, 1, 100, 1 };
    NumArray a(cost);
    cout<<a.sumRange(1, 3);
}