#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n,flag=-1,count=0;
    cin>>n;
    vi ar(n),st(150002);
    For(i,n) cin>>ar[i];
    sort(ar.begin(),ar.end());
    For(i,n)
    {
        if(st[ar[i]]!=0 && st[ar[i]-1]!=0 && st[ar[i]+1]!=0)
            continue;
        else if(st[ar[i]-1]==0 && ar[i]>1)
            st[ar[i]-1]++,count++;
        else if(st[ar[i]]==0)
            st[ar[i]]++,count++;
        else if(st[ar[i]+1]==0)
            st[ar[i]+1]++,count++;
    }
    cout<<count<<endl;
    return 0;
}