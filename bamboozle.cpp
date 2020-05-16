#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n,count=0;
    cin>>n;
    vi ar(n),st(1000040);
    For(i,n) cin>>ar[i],st[ar[i]]++;
    for(int i=0;i<=st.size();i++)
    {
        if(!st[i]) continue;
        if(st[i]==1) count++;
        else
        {
            st[i+1]+=st[i]/2;
            if(st[i]&1) count++;                        
        }
    }
    cout<<count<<endl;
    return 0;
}