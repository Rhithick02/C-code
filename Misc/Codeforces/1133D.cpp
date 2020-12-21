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
    int n,res=0,cnt=0;
    map<pair<int,int>,int> mp;
    cin>>n;
    vi a(n),b(n);
    For(i,0,n) cin>>a[i];
    For(i,0,n) cin>>b[i];
    For(i,0,n){
        if(!a[i]){
            if(!b[i]) cnt++;
        }
        else if(!b[i]) mp[{0,0}]++,res=max(res,mp[{0,0}]);
        else{
            int div=__gcd(abs(a[i]),abs(b[i]));
            mp[{a[i]/div,b[i]/div}]++;
            mp[{-1*a[i]/div,-1*b[i]/div}]++;
            res=max(max(res,mp[{-1*a[i]/div,-1*b[i]/div}]),mp[{a[i]/div,b[i]/div}]);
        }
    }
    cout<<res+cnt<<"\n";
    return 0;
}