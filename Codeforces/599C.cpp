#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n,count=1;
    cin>>n;    
    vi ar(n),max(n),min(n);
    set<int> se;
    For(i,n) cin>>ar[i];
    for(int i=n-1;i>=0;i--)
    {
        se.insert(ar[i]);        
        min[i]=*se.begin();
    }
    se.clear();
    for(int i=0;i<n;i++)
    {
        se.insert(ar[i]);
        max[i]=*se.rbegin();
    }
    For(i,n-1) if(max[i]<=min[i+1]) count++;
    cout<<count<<endl;
    return 0;
}