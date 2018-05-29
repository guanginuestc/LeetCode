#include<string>
#include<iostream>
#include<vector>
using namespace std;

	bool isInterleave(string s1, string s2, string s3) {
		int len1 = s1.size();
		int len2 = s2.size();
		int len3 = s3.size();
		if ((len1 + len2) != len3)
			return false;
		if (len1 == 0 && len1 == len2&&len2 == len3)
			return true;
		vector<vector<bool>>dp(len1 + 1, vector<bool>(len2 + 1));
		dp[0][0] = true;
		for (int i = 1; i <= len1; i++)
		{
			if (s1[i - 1] == s3[i - 1])
				dp[i][0] = dp[i - 1][0];
		}
		for (int j = 1; j <= len2; j++)
		{
			if (s2[j - 1] == s3[j - 1])
				dp[0][j] = dp[0][j - 1];
		}
		for (int i = 1; i <= len1; i++)
		{
			for (int j = 1; j <= len2; j++)
			{

				if ((s1[i - 1] == s3[i + j - 1]) && (dp[i - 1][j]))
				{
					dp[i][j] = dp[i - 1][j];
				}

				if ((s2[j - 1] == s3[i + j - 1]) && (dp[i][j - 1]))
				{
					dp[i][j] = dp[i][j - 1];
				}

			}
		}
		return dp[len1][len2];
	}


void main() {
	string s1 = "aa", s2 = "ab", s3 = "abaa";
	bool a=isInterleave(s1, s2, s3);
	getchar();
}