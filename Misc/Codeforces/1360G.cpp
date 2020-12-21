#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        if(n*a!=m*b) cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            int k=0;
            bool ar[n][m];
            memset(ar,0,sizeof(ar));
            For(i,n)
                For(j,a)
                {
                    ar[i][k++]=1;
                    if(k==m) k=0;
                }
            For(i,n)
            {
                For(j,m) cout<<ar[i][j];
                cout<<endl;
            }
        }
    }
    return 0;
}