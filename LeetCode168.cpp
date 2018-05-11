#include<string>
#include<iostream>

using namespace std;
string convertToTitle(int n) {
    string s = "";
    while (n > 0) {
        s=char((n-1) % 26 + 65)+s;
        n = (n-1) / 26;
    }
    return s;
}

void main() {
    string s = "AB";
    int i = 701;
    s = convertToTitle(i);
    cout<<s << endl;

}