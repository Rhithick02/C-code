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
    lli sum=0;
    int n,x,maxi=0;
    cin>>n;
    For(i,0,n) cin>>x,sum+=x,maxi=max(maxi,x);
    if(sum&1 || (sum/2<maxi)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}