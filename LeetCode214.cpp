#include<iostream>
#include<string>
using namespace std;
string shortestPalindrome(string s) {
	string ans = s;//��ŷ��ؽ��
	string r_s;//�洢���õ��ַ���
	for (int i = s.size() - 1; i >= 0; i--) {
		r_s += s[i];
	}
	int len = s.size();
	while (r_s != s) {//�ҵ���������������غϲ��֣��ҵ�������
		ans = s.back() + ans;//���غ�ʱ�������һλ���뵽��ǰ�����ǰ��
		s.pop_back();
		r_s = r_s.substr(1, r_s.size() - 1);
	}
	return ans;

}
void main() {
	string s = "aacecaaa";
	std::cout << shortestPalindrome(s);
}