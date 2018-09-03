class Solution {
public:
    string toLowerCase(string str) {
        for(int i=0;i<str.size();i++){
            str[i]|=0x20;//大写字母与小写字母的差别在与由高到底的第三位是否为1
        }
        return str;
    }
};