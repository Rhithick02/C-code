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
    int n,q,x,y,flag=0;
    cin>>n>>q;
    bool ar[2][n];
    memset(ar,0,sizeof(ar));
    while(q--)
    {
        cin>>x>>y;
        if(!ar[x-1][y-1])
        {
            ar[x-1][y-1]=1;
            for(int j=-1;j<=1;j++)
            {
                if(y-1+j<0 || y-1+j>n-1) continue;
                if(ar[2-x][y-1+j]) flag++;
            }
        }        
        else
        {
            ar[x-1][y-1]=0;
            for(int j=-1;j<=1;j++)
            {
                if(y-1+j<0 || y-1+j>n-1) continue;
                if(ar[2-x][y-1+j]) flag--;
            }
        }
        if(flag==0) cout<<"yes\n";
        else cout<<"no\n";        
    }
    return 0;
}