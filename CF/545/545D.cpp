#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,sum=0,count=0;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar.begin(),ar.end());
    for(int i=0;i<n;i++)
    {
        if(sum<=ar[i])
        {
            count++;
            sum+=ar[i];
        }
    }
    cout<<count<<endl;
    return 0;
}