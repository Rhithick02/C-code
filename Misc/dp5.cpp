//Tiling problem
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define fi first
#define se second

int ways(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    return ways(n-1) + ways(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<ways(n)<<endl;
    return 0;
}