#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int n,count=0,flag=0;
    cin>>n;
    vector<int> ar(n),st(n);
    For(i,n)
    {
        cin>>ar[i];
        if(ar[i]==i)
        {
            count++;
            st[i]=1;
        }
    }
    For(i,n)
    {
        if(st[i]==0 && ar[ar[i]]==i)
        {
            flag=1;
            break;
        }
    }
    if(count==n)
        cout<<count;
    else if(flag==1)
        cout<<count+2;
    else 
        cout<<count+1;
    return 0;
}