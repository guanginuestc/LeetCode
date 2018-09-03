class Solution {
public:
inline int StrtoTime(string str) {
	if (str.size() != 5) {
		return 0;
	}
	return ((str[0] - 0x30) * 10 + str[1] - 0x30) * 60 + (str[3] - 0x30) * 10 + str[4] - 0x30;
}
int findMinDifference(vector<string>& timePoints) {
	vector<int>result(timePoints.size());
	for (int i = 0; i < timePoints.size(); i++) {
		result[i] = StrtoTime(timePoints[i]);
	}
	sort(result.begin(), result.end());
	int re = 24 * 60;
	result.push_back(re + result[0]);
	for (int i = 0; i < result.size() - 1; i++) {
		int temp = result[i + 1] - result[i];
		re = re < temp ? re : temp;
	}
	return re;
}
};