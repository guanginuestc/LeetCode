#include<iostream>
#include<vector>
#include<minmax.h>
using namespace std;
int minCostClimbingStairs(vector<int>& cost) {
    if (cost.size() == 0) {
        return 0;
    }
    if (cost.size() == 1) {
        return cost[0];
    }
    if (cost.size() == 2) {
        return min(cost[0], cost[1]);
    }
    cost.push_back(0);
    for (vector<int>::size_type i = 2; i < cost.size(); i++)
    {
        cost[i] = min(cost[i - 1], cost[i - 2]) + cost[i];
    }
    return cost[cost.size() - 1];
}
void main() {
    vector<int> cost = { 1, 100, 1, 1, 1, 100, 1, 1, 100, 1 };
    cout << minCostClimbingStairs(cost);
}