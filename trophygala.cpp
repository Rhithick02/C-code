#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n,m,count=0;
    cin>>n>>m;
    vector< pair<int,double> > ar(n),copy(n);
    For(i,m) cin>>ar[i].first>>ar[i].second,copy[i]=ar[i];
    sort(ar.begin(),ar.end());
    For(i,m)
    {
        if(ar[i].first!=copy[i].first) count++;
    }
    cout<<count<<endl;
    return 0;
}