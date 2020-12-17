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
    vector<bool> prime(1010,false);
    vi st;
    for(int i=2;i*i<=1010;i++){
        for(int j=i*i;j<=1010;j+=i){
            if(prime[j]) continue;
            prime[j]=true;
        }
    }
    For(i,2,1010) if(!prime[i]) st.pb(i);
    int n,remvert;
    cin>>n;
    vpa ar;
    For(i,1,n) ar.pb({i,i+1});
    ar.pb({n,1});
    remvert=*lower_bound(asc(st),n)-n;
    int i=1;
    while(remvert--) ar.pb({i,n/2+i}), i++;
    cout<<ar.size()<<endl;
    for(auto it: ar) cout<<it.fi<<" "<<it.se<<endl;
    return 0;
}