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
    int n;
    cin>>n;
    lli x;
    vector< pair<int,lli> >ar(n);
    For(i,n)
    {
        cin>>x;
        int count=0;
        for(lli j=x;j%3==0;j/=3) count++;
        ar[i]={-count,x};
    }
    sort(asc(ar));
    For(i,n) cout<<ar[i].se<<" ";
    return 0;
}