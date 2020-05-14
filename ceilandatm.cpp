#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n,count=0,ar[]={1,5,10,20,100},i=4;
    cin>>n;
    while(n)
    {
        count+=n/ar[i];
        n-=(n/ar[i])*ar[i];
        i--;
    }
    cout<<count<<endl;
    return 0;
}