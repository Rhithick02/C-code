#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define pa pair<int,int>
#define pal pair<long long,long long>
#define vpa vector<pair<int,int>>
#define vpal vector<pair<long long,long long>>
#define fi first
#define se second

int main(){
    int r,c;
    cin>>r>>c;
    if(r==1 && c==1) cout<<0;
    else if(r==1)
        For(i,c) cout<<i+2<<" ";
    else if(c==1)
        For(i,r) cout<<i+2<<endl;
    else
    {
        int mat[r][c];
        For(i,c) mat[0][i]=i+2;
        for(int i=1;i<r;i++)
        {
            for(int j=0;j<c;j++)
                mat[i][j]=(j+2)*(c+i+1);
        }
        For(i,r)
        {
            For(j,c) cout<<mat[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}