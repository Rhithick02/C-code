#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    lli n,x,time=0;
    cin>>n>>x;
    vector<lli> ar(n);
    for(lli i=0;i<n;i++)
        cin>>ar[i];
    sort(ar.begin(),ar.end());
    for(lli i=0;i<n;i++)
    {
        time+=x*ar[i];
        if(x>1)
            x--;
    }
    cout<<time<<endl;
    return 0;
}