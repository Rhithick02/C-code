#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    lli n,k,median,count=1;
    cin>>n>>k;
    vil ar(n);
    For(i,n) cin>>ar[i];
    sort(asc(ar));
    median=ar[n/2];
    for(int i=n/2;i<n-1 && k>0;i++)
    {
        if(ar[i]!=ar[i+1]) 
        {
            if(k>=(ar[i+1]-ar[i])*count)
            {
                median+=ar[i+1]-ar[i];
                k-=(ar[i+1]-ar[i])*count;
            }
            else break;
        }
        count++;
    }
    if(k>0) median+=k/count;
    cout<<median<<endl;
    return 0;
}