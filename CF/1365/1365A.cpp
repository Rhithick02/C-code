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
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,flag,count=0;
        cin>>n>>m;
        int ar[n][m];
        For(i,n) For(j,m) cin>>ar[i][j];
        For(i,n)
        {
            For(j,m)
            {
                flag=0;
                if(ar[i][j]) continue;
                for(int k=0;k<n;k++)
                    if(ar[k][j]) flag=1;
                if(!flag)
                {
                    for(int k=0;k<m;k++)
                        if(ar[i][k]) flag=1;
                }
                if(!flag) count++,ar[i][j]=1;
            }
        }
        if(count&1) cout<<"Ashish";
        else cout<<"Vivek";
        cout<<endl;
    }
    return 0;
}