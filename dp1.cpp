//fibonacci series
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define fi first
#define se second

int main(){
    int n;
    cin>>n;
    vi fib(n+1);
    fib[0]=0,fib[1]=1;
    for(int i=2;i<=n;i++)
        fib[i]=fib[i-1]+fib[i-2];
    cout<<fib[n];
    return 0;
}