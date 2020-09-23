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
        lli a,b,count=0,ans=0;
        cin>>a>>b;
        if(b>a) swap(a,b);
        while(a>b)
        {
            if(a&1) break;
            else a=(a>>1);
            count++;
            if(count==3) ans++,count=0;
        }
        ans+=count/2+count%2;
        if(a==b) cout<<ans;
        else cout<<-1;
        cout<<endl;
    }
    return 0;
}