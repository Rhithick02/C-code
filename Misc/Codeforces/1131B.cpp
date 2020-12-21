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
    lli n,count=0;
    cin>>n;
    vpa ar(n);
    For(i,n) cin>>ar[i].fi>>ar[i].se;
    count+=min(ar[0].fi,ar[0].se)+1;
    for(int i=1;i<n;i++)
    {
        int mini=min(ar[i].fi,ar[i].se),maxi=max(ar[i-1].fi,ar[i-1].se);
        count+=max(0,mini-maxi+(ar[i-1].fi!=ar[i-1].se? 1:0));
    }
    cout<<count<<endl;
    return 0;
}