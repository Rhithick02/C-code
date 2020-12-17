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

map<int,int> mp;
void divisors(int k){
    vi ar;
    For(i,2,(int)sqrt(k)+1){
        if(k%i!=0)  continue;
        while(k%i==0) k/=i;
        ar.pb(i);
    }
    if(k>2) ar.pb(k);
    for(auto it: ar) mp[it]++;
}

int main(){
    ios::sync_with_stdio(false);
    lli ans=1;
    int n;
    cin>>n;
    vi ar(n);
    For(i,0,n){
        cin>>ar[i];
        divisors(ar[i]);
    }
    for(auto it: mp){
        if(it.se<n-1) continue;
        vi st(n);
        For(j,0,n){
            int temp=ar[j],cnt=0;
            while(temp%it.fi==0){
                cnt++;
                temp/=it.fi;
            }
            st[j]=cnt;
        }
        sort(asc(st));
        if(st[1]) ans*=(lli)pow(it.fi,st[1]);
    }
    cout<<ans<<endl;
    return 0;
}