#include<iostream>
#include<string>
using namespace std;
string shortestPalindrome(string s) {
	string ans = s;//存放返回结果
	string r_s;//存储逆置的字符串
	for (int i = s.size() - 1; i >= 0; i--) {
		r_s += s[i];
	}
	int len = s.size();
	while (r_s != s) {//找到逆序和正序最大的重合部分，找到后跳出
		ans = s.back() + ans;//不重合时，将最后一位加入到当前结果的前方
		s.pop_back();
		r_s = r_s.substr(1, r_s.size() - 1);
	}
	return ans;

}
void main() {
	string s = "aacecaaa";
	std::cout << shortestPalindrome(s);
}