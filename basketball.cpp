#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n;
    cin>>n;
    int ar[2][n+1]={0},h[2][n+1]={0};
    for(int i=0;i<2;i++)
        for(int j=1;j<=n;j++)
            cin>>h[i][j];
    for(int i=1;i<=n;i++)
    {
        ar[0][i]=max(ar[0][i-1],ar[1][i-1]+h[0][i]);
        ar[1][i]=max(ar[1][i-1],ar[0][i-1]+h[1][i]);
    }
    cout<<max(ar[0][n],ar[1][n]);
    cout<<endl;
    return 0;
}