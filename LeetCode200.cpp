#include<iostream>
#include<string>
#include<vector>
using namespace std;
stvoid set(vector<vector<char>>& grid, int i, int j) {
	grid[i][j] = 0;
	if (i < grid.size() - 1) {
		if (grid[i + 1][j]=='1') {
			set(grid, i + 1, j);
		}
	}
	if (j < grid[0].size() - 1) {
		if (grid[i][j + 1] == '1') {
			set(grid, i, j+1);
		}
	}
	if (i > 0) {
		if (grid[i - 1][j] == '1') {
			set(grid, i - 1, j);
		}
	}
	if (j > 0) {
		if (grid[i][j - 1]=='1') {
			set(grid, i, j - 1);
		}
	}
}
    int numIslands(vector<vector<char>>& grid) {
	int m = grid.size();
	if (m == 0) {
		return 0;
	}
	int n = grid[0].size();
	
	int count = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == '1') {
				set(grid, i, j);
				count++;
			}
		}
	}
	return count;
}