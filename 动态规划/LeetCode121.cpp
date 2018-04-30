#include<iostream>
#include<vector>
#include<minmax.h>
using namespace std;

int maxProfit(vector<int>& prices) {
	if (prices.size() == 0) {
		return 0;
	}
	vector<int> result(prices.size(), 0);
	int temp = prices[0];
	for (int i = 1; i < prices.size(); i++) {
		if (prices[i] < temp) {
			result[i] = result[i - 1];
			temp = prices[i];
		}
		else {
			result[i] = max(result[i - 1], prices[i] - temp);
		}
	}
	return max(result[result.size() - 1], 0);
}
void main() {
	vector<int> cost = { 1, 100, 1, 1, 1, 100, 1, 1, 100, 1 };
	cout << maxProfit(cost);
}