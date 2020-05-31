#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,sum=0,count=0;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]&1)
            count++;
        sum+=ar[i];
    }
    if(sum&1)
        cout<<"First";
    else if(count==0)
        cout<<"Second";
    else 
        cout<<"First";
    return 0;
}