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
    int n,a,b,k,count=0;
    cin>>n>>a>>b>>k;
    vi ar(n),st(n);
    For(i,0,n) cin>>ar[i];
    For(i,0,n) 
    {
        int te=(ar[i]/(a+b));
        st[i]=ar[i]-(te*(a+b)==ar[i]?(te-1)*(a+b):te*(a+b));
    }
    sort(asc(st));
    For(i,0,n)
    {
        if(!st[i]) continue;
        if(k>=(st[i]-1)/a) k-=(st[i]-1)/a,count++;
        else break;
    }
    cout<<count<<endl;
    return 0;
}