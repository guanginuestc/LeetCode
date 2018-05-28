#include<string>
#include<iostream>
#include<stack>
using namespace std;

bool canTransform(string start, string end) {
	stack<int> s;
	for (int i = 0; i<start.size(); i++) {
		if (end[i] == 'L') s.push(1);
		if (start[i] == 'L' && !s.empty()) {
			if (s.top() == 1) s.pop();
			else return false;
		}
		if (start[i] == 'R') s.push(2);
		if (end[i] == 'R' && !s.empty()) {
			if (s.top() == 2) s.pop();
			else return false;
		}
	}
	return s.empty();
}