#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int n,flag=0;
int rotation(int ar[], int sum,int k)
{
    if(k==n && sum%360==0)
        return 1;
    else if(k==n)
        return 0;
    return max(rotation(ar,sum+ar[k],k+1),rotation(ar,sum-ar[k],k+1));
}
int main(){
    cin>>n;
    int ar[n];
    For(i,n) cin>>ar[i];
    if(rotation(ar,0,0))
        cout<<"YES";
    else 
        cout<<"NO";
    return 0;
}