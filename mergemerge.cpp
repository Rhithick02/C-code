#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int n,count=1;
    cin>>n;
    vector<int> l(n),u(n);
    For(i,n) cin>>l[i]>>u[i];
    for(int i=0;i<n-1;i++)
    {
        if(u[i]<l[i+1])
            count++;
    }
    cout<<count<<endl;
    return 0;
}