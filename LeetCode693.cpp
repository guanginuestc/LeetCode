#include<iostream>
#include<string>
using namespace std;
bool hasAlternatingBits(int n) {
	n ^= n >> 1;
	while (n) {
		if ((n & 1) == 0) {
			return false;
		}
		n = n >> 1;
	}
	return true;
}
void main() {
	string s = "aacecaaa";
	std::cout << hasAlternatingBits(2);
}