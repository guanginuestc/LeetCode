#include <iostream>
#include<string>
#include<windows.h>
#include<vector>
using namespace std;

int calculateMinimumHP(vector<vector<int> >& dungeon) {
    int M = dungeon.size();
    int N = dungeon[0].size();
    vector<vector<int> > minHP(M,vector<int> (N));

    if(dungeon[M-1][N-1]>=0) minHP[M-1][N-1] = 0;
    else minHP[M-1][N-1] = -dungeon[M-1][N-1];

    for(int i = M-2 ; i>=0  ; i--) //对 第 N 列 进行处理 
    {
        minHP[i][N-1] = dungeon[i][N-1]>=minHP[i+1][N-1]? 0 : minHP[i+1][N-1] - dungeon[i][N-1];
    }

    for(int j = N-2 ; j>= 0 ; j--) // 对 第 M 行 进行处理 
    {
        minHP[M-1][j] = dungeon[M-1][j]>=minHP[M-1][j+1]? 0 : minHP[M-1][j+1] - dungeon[M-1][j];
    }

    for(int i = M-2 ; i>= 0 ; i--)
        for(int j = N-2 ; j >=0  ; j--)
        {

            int minHP_from_bot = dungeon[i][j]>=minHP[i+1][j]? 0 : minHP[i+1][j] - dungeon[i][j];;
            int minHP_from_right = dungeon[i][j]>=minHP[i][j+1]? 0 : minHP[i][j+1] - dungeon[i][j];
            minHP[i][j]= min(minHP_from_bot,minHP_from_right);
        }



    return minHP[0][0]+1;
}