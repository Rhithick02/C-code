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
    int n,x;
    cin>>n;
    vector< pair<int,int> >ar(n);
    For(i,n)
    {
        cin>>x;
        ar[i].fi=x-(i+1);
        ar[i].se=x;
    }
    lli sum=0;
    sort(asc(ar));
    set<lli> te;
    sum=ar[0].se;
    for(int i=0;i<n-1;i++)
    {
        if(ar[i].fi==ar[i+1].fi) sum+=ar[i+1].se;
        else te.insert(sum),sum=ar[i+1].se;
    }
    te.insert(sum);
    cout<<*te.rbegin();
    return 0;
}