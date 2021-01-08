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

bool sortbysec(const pa &a, const pa &b)
{
    return a.se<b.se;
}
int main(){
    int n,m,k;
    lli sum=0;
    cin>>n>>m>>k;
    vi ar(n);
    vpa st(n);
    For(i,n) cin>>ar[i];
    sum=ar[n-1]-ar[0]+1;
    for(int i=1;i<n;i++)
    {
        st[i].fi=ar[i]-ar[i-1]-1;
        st[i].se=i;
    }
    sort(des(st));
    For(i,k-1)
    {
        sum-=ar[st[i].se]-ar[st[i].se-1];
        sum++;
    }
    cout<<sum<<endl;
    return 0;
}