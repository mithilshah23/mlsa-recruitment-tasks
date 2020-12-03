#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    char a;
    cin>>n>>m;
    char grid[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a;
            grid[i][j]=a;

        }
    }
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        if(grid[i][m-1]!='D')
        {
            sum++;
        }
    }
    for(int i=0;i<m-1;i++)
    {
        if((grid[n-1][i])!='R')
        {
            sum++;
        }
    }
cout<<sum;
return 0;
}