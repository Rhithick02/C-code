#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int n,m;
    lli sum=0;
    cin>>n>>m;
    vector<int> ar(n);
    For(i,n)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    sort(ar.begin(),ar.end());
    if(sum<m)
        cout<<"-1";
    else if(sum==m)
        cout<<n;
    else 
    {

    }

}