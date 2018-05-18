#include<iostream>
#include<vector>
#include<string>
#include<map>

using namespace std;
vector<string> subdomainVisits(vector<string>& cpdomains) {
	map<string, int> result;
	vector<string> re;
	int posion;
	int num;
	for (vector<string>::size_type si = 0; si < cpdomains.size(); si++) {
		posion = cpdomains[si].find(' ');
		num = stoi(cpdomains[si].substr(0, posion));
		result[cpdomains[si].substr(posion+1)]+=num;
		posion= cpdomains[si].find('.');
		
		while (posion != -1) {
			result[cpdomains[si].substr(posion + 1)]+=num;
			posion = cpdomains[si].find('.', posion + 1);
		}
	}
	string t;
	for (map<string, int>::iterator it = result.begin(); it != result.end(); it++) {
		t = to_string(it->second) + " " + it->first;
		re.push_back(t);
	}
	return re;
}
void main() {
	vector<string> re = { "9001 discuss.leetcode.com" };
	re = subdomainVisits(re);
	return;
}