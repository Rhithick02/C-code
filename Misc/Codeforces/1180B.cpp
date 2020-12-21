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
    int n,mini=1;
    cin>>n;
    vi ar(n);
    For(i,0,n){
        cin>>ar[i];
        if(ar[i]>=0) ar[i]=-ar[i]-1;
    }
    if(n&1) mini=*min_element(asc(ar));
    for(auto it: ar) 
    {
        if(it==mini) cout<<-it-1<<" ",mini=1;
        else cout<<it<<" ";
    }
    return 0;
}