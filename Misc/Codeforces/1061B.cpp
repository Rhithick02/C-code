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
    lli sum=0;
    int n,m,maxi=0,k=0;
    cin>>n>>m;
    vi ar(n);
    For(i,n) cin>>ar[i];
    sort(asc(ar));
    For(i,n-1)
    {
        if(k<ar[i]) k++;
        if(ar[i]==1) continue;
        sum+=ar[i]-1;
    }
    if(k<ar[n-1]) sum+=k;
    else if(n!=1)sum+=ar[n-1]-1;
    cout<<sum<<endl;
    return 0;
}
