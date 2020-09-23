#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> neck(n),brac(n);
        For(i,n) cin>>neck[i];
        For(i,n) cin>>brac[i];
        sort(neck.begin(),neck.end());
        sort(brac.begin(),brac.end());
        For(i,n) cout<<neck[i]<<" ";
        cout<<endl;
        For(i,n) cout<<brac[i]<<" ";
        cout<<endl;
    }
    return 0;
}