#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n,m,temp;
    cin>>n>>m;
    vi ar(n),st(100001);
    set<int> se;
    For(i,n) cin>>ar[i];    
    for(int i=n-1,k=0;i>=0;i--)
    {
        se.insert(ar[i]);
        st[i+1]=se.size();
    }
    For(i,m)
    {
        cin>>temp;
        cout<<st[temp]<<endl;
    }
    return 0;
}