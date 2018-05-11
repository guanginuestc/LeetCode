#include<string.h>
#include<iostream>

using namespace std;
int titleToNumber(string s) {
    int re = 0;
    for (string::iterator it = s.begin(); it != s.end(); it++) {
        re = *it - 'A' + 1+re*26;
    }
    return re;
}

void main() {
    string s = "AB";
    cout << titleToNumber(s)<<endl;

}