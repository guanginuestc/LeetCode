#include<iostream>
#include<string>
#include<vector>
using namespace std;
int romanToInt(string& s) {
    int num = 0;
    string::reverse_iterator it = s.rbegin();
    for (; it != s.rend(); ++it)
    {
        switch (*it)
        {
        case 'I': {num += (num >= 5 ? -1 : 1); break; }
        case 'X': {num += 10 * (num >= 50 ? -1 : 1); break; }
        case 'C': {num += 100 * (num >= 500 ? -1 : 1); break; }
        case 'V': {num += 5; break; }
        case 'L': {num += 50; break; }
        case 'D': {num += 500; break; }
        case 'M': {num += 1000; break; }
        }
    }
    return num;
}
void main() {
    string s = "LVIII";
    std::cout << romanToInt(s);
}