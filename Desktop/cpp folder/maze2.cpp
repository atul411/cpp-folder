#include<bits/stdc++.h>
using namespace std;
const int d = 4;
int p =1;
void print(int arr[d][d])
{
    for(int i =0; i<d;i++)
    {
        for(int j =0; j<d;j++)
            cout<<arr[i][j]<<"\t";
        cout<<endl;
    }
}
bool isSafe(int maze[d][d],int curRow, int CurCol,int sol[d][d])
{
    return curRow>=0&&curRow<d&&CurCol>=0&&CurCol<d&&maze[curRow][CurCol]==1&&sol[curRow][CurCol]==0;
}
bool solveMaze(int maze[d][d],int curRow, int curCol, int sol[d][d])
{
    if(curRow==d-1&&curCol==d-1)
    {
        print(sol);
        cout<<"========================= -> "<<p<<endl;
        p++;
        return true;
    }
    for(int i = 0;i<4;i++)
    {
        int x_move[] = {1,-1,0,0};
        int y_move[] = {0,0,1,-1};
        int next_row = curRow + x_move[i];
        int next_col = curCol + y_move[i];
        if(isSafe(maze,next_row,next_col,sol))
        {
            sol[next_row][next_col] = 1;
            solveMaze(maze,next_row,next_col,sol);
            sol[next_row][next_col] = 0;
        }
    }
    return false;
}
int main()
{
	int maze[d][d] = { { 1, 1, 1, 1 },
					{ 1, 0, 0, 1 },
					{ 1, 1, 0, 0 },
					{ 0, 1, 1, 1 } };
    int sol[d][d] = {0};
    sol[0][0] = 1;
	solveMaze(maze,0,0,sol);

	return 0;
}




















