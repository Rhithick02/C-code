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
    int n,mini=1e9,maxi=0,cnt=0,res=0;
    cin>>n;
    vi ar(n);
    For(i,0,n){
        cin>>ar[i];
        mini=min(mini,ar[i]);
        maxi=max(maxi,ar[i]);
    }
    vector<bool> check(maxi-mini+1);
    for(int i=2;i<=sqrt(maxi);i++){
        int te=mini+i-mini%i;
        if(te==i) te+=i;
        for(int j=te;j<=maxi;j+=i) check[j-mini]=true;
    }
    if(mini==1) check[0]=true;
    for(int i=2;i<=sqrt(mini);i++){
        if(mini%i) continue;
        check[0]=true;
        break;
    }
    For(i,0,n){
        if(!check[ar[i]-mini]) cnt++;
        else res=max(res,cnt),cnt=0;
    }
    res=max(res,cnt);
    cout<<res<<"\n";
}