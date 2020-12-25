#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    lli n,k;
    cin>>n>>k;
    vil ar;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(!(n%i))
        {
            ar.pb(i);
            if(n/i!=i) ar.pb(n/i);
        }
    }
    if(ar.size()<k) cout<<"-1";
    else
    {
        sort(asc(ar));
        cout<<ar[k-1];
    }
    return 0;
}