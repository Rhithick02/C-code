#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
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
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        lli mini=1e10;
        int n,x,cnt=0,teams=0;
        cin>>n>>x;
        vi ar(n);
        For(i,0,n) cin>>ar[i];
        sort(des(ar));
        For(i,0,n){
            mini=min(mini,1LL*ar[i]);
            cnt++;
            if(cnt*mini>=x) teams++,mini=1e18,cnt=0;
        }
        cout<<teams<<"\n";
    }
    return 0;
}