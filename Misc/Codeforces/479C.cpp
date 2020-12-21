#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n;
    cin>>n;
    vector< pair<int,int> > ar(n);
    For(i,n) cin>>ar[i].first>>ar[i].second;
    sort(ar.begin(),ar.end());
    int temp=min(ar[0].first,ar[0].second);
    for(int i=1;i<n;i++)
    {
        if(min(ar[i].first,ar[i].second)>=temp)
            temp=min(ar[i].first,ar[i].second);
        else temp=max(ar[i].first,ar[i].second);
    }
    cout<<temp<<endl;
    return 0;
}