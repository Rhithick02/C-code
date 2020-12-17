#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define fi first
#define se second

int main(){
    int n,m,count=0;
    cin>>n>>m;
    while(n!=m)
    {
        if(m>n && !(m&1)) m/=2;
        else m+=1;
        count++;
    }
    cout<<count;
    return 0;
}