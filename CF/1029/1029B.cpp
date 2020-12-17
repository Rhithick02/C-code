#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    lli n,count=1,store=0;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n-1;i++)
    {
        if(2*ar[i]>=ar[i+1])
            count++;
        else if(count>store)
            store=count,count=1;
        else 
            count=1;        
    }
    store=max(store,count);
    cout<<store;
    return 0;
}