#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define fi first
#define se second

int main(){
	int n,k;
	lli cost=1e18,sum=0;
	cin>>n>>k;
	vector<lli> ar(n);
	For(i,n) cin>>ar[i];
    For(i,n-1) ar[i+1]=min(ar[i+1],2*ar[i]);
	for(int i=n-1;i>=0;i--)
    {
        int store=k/(1<<i);
        sum+=store*ar[i];
        k-=(store<<i);
        if(k>0) cost=min(cost,sum+ar[i]);
        else cost=min(cost,sum);
    }
    cout<<cost<<endl;
	return 0;
}