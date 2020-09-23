#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int t;
    vector<lli> ar(500001);
    lli sum=0;
    for(lli i=0;i<500001;i++)
    {
        sum+=i*i*8;
        ar[i]=sum;
    }
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        cout<<ar[(n-1)/2]<<endl;
    }
    return 0;
}