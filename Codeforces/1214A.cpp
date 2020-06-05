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
    int n,d,e;
    cin>>n>>d>>e;
    int ans=n;
    for(int i=0;i*5*e<=n;i++)
        ans=min(ans,(n-i*5*e)%d);
    cout<<ans<<endl;
    return 0;
}