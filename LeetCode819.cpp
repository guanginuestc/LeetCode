class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string,int> ss = split(paragraph, " ");
        for(vector<string>::iterator i=banned.begin();i!=banned.end();i++){
            ss[*i]=0;
        }
        string temp;
        int temp_num=0;
        for (map<string,int>::iterator ix = ss.begin(); ix != ss.end(); ix++) {
            
            if (temp_num< ix->second){
                temp_num=ix->second;
                temp=ix->first;
            } 
    }
        return temp;
    
}
map<string, int> split(string inputstring, string c) {
	vector<string> result;
	map<string, int> temp_map;
	string::size_type pos1 = 0, pos2 = 0;
	string temp;
	while (pos2 < inputstring.size()) {
		pos2 = inputstring.find(c, pos2);
		if (pos2 == -1) {
			while (pos1 <inputstring.size()) {
				if (isalpha(inputstring[pos1]))
					temp += tolower(inputstring[pos1]);
				pos1++;
			}
			if (temp.size())
				temp_map[temp] ++;
			break;
		}
		while (pos1 <pos2) {
			if (isalpha(inputstring[pos1]))
				temp += tolower(inputstring[pos1]);
			pos1++;
		}
		pos2 += c.size();
		if (temp.size())
			temp_map[temp] ++;
		result.push_back(temp);
		temp = "";
		pos1 = pos2;
	}
	return temp_map;
}
};