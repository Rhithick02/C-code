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
    int n,m,d,flag=0,count=0;
    cin>>n>>m>>d;
    vi ar(n*m);
    For(i,n*m) cin>>ar[i];
    sort(asc(ar));
    For(i,n*m-1)
    {
        if((ar[i+1]-ar[i])%d!=0)
        {
            flag=-1;
            break;
        }
    }
    if(flag==-1) cout<<-1;
    else
    {
        flag=(n*m)/2;
        For(i,n*m)
            count+=abs((ar[flag]-ar[i])/d);
        cout<<count<<endl;
    }
    return 0;
}