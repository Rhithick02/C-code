#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,count=0;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]&1)
            count++;
        else 
        count--;
    }
    if(abs(count)==n)
    {
        for(int i=0;i<n;i++)
            cout<<ar[i]<<" ";
    }
    else 
    {
        sort(ar.begin(),ar.end());
        for(int i=0;i<n;i++)
            cout<<ar[i]<<" ";
    }
    return 0;
}