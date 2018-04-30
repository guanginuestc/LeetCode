/*
author:Guang
动态规划解爬楼梯问题，每次可以走的距离为1或2，则第i次的方法数为第i-1次的楼梯数+第i-2次的种类
*/
#include<iostream>
#include<vector>
using namespace std;
int climbStairs(int n) {//动态规划
    vector<int> temp_list(n+1,0);
    temp_list[0] = 0;
    temp_list[1] = 1;
    temp_list[2] = 2;
    for (int i = 3; i < n+1; i++) {
        temp_list[i] = temp_list[i - 1] + temp_list[i - 2];
    }
    return temp_list[n];
    
}
void main() {
    cout << climbStairs(3);
}