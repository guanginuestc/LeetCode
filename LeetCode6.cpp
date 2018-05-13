#include<iostream>
#include<string>
#include<vector>

using namespace std;
string convert(string s, int numRows) {
	string result;
	int s_len = s.size();
	if (s_len == 0) {
		return result;
	}
	int group_len;
	if (numRows <= 2) {
		group_len = numRows;
	}
	else {
		group_len = 2 * numRows - 2;
	}
	
	int groups = (s_len + group_len - 1) / group_len;
	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j < groups; j++) {
			if (group_len*j + i > s_len)
				continue;
			result += s[group_len*j + i];
			if ((i != 0) && (i != numRows - 1)) {
				if ((group_len*j + group_len - i) > s_len)
					continue;
				result += s[group_len*j + group_len - i];
			}
		}
	}
	return result;
}

void main() {
	string s = "PAYPALISHIRING";
	int numRows = 4;
	cout << convert(s, numRows) << endl;
	
}