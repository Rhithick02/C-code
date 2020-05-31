#include<bits/stdc++.h>
using namespace std;
int count;
int dp[11][11];
void movecount(int i,int j,int n)
{
    if(j>10||j<1||i>10||i<1||n<0)
    return ;
    if(n==0)
    {
        if(!dp[i][j])
        {
            count++;
            dp[i][j]++;
            return ;
        }
    }
    movecount(i-1,j-2,n-1);
    movecount(i-1,j+2,n-1);
    movecount(i+2,j-1,n-1);
    movecount(i+2,j+1,n-1);
    movecount(i+1,j-2,n-1);
    movecount(i+1,j+2,n-1);
    movecount(i-2,j-1,n-1);
    movecount(i-2,j+1,n-1);
}
int main()
{
    int i,j,n;
    cin>>i>>j>>n;
    movecount(i,j,n);
    cout<<count;
    return 0;    
}