#include <iostream>
#include<string>
#include<windows.h>
#include<vector>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
	vector<vector<int>> result;
	
	for (vector<vector<int>>::iterator it = A.begin(); it != A.end(); it++) {
		vector<int> temp;
		for (int i = (*it).size()-1; i >=0; i--) {
			temp.push_back(1 - (*it)[i]);
		}
		result.push_back(temp);
		//temp.erase(temp.begin(), temp.end());
	}
	return result;
}