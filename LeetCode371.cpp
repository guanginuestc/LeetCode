#include <iostream>
#include<string>
#include<windows.h>
#include<vector>
using namespace std;

    int getSum(int a, int b) {
        int temp;
        while(b){
        temp=a&b;
        temp=temp<<1;
        a=a^b;
        b=temp;
    }
        return a;
    }
