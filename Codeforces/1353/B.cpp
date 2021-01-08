#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0;
        cin>>n>>k;
        vi a(n),b(n);
        For(i,n) cin>>a[i],sum+=a[i];
        For(i,n) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        For(i,k)
        {
            if(a[i]<b[i]) sum+=b[i]-a[i];
            else break;
        }
        cout<<sum<<endl;
    }
    return 0;
}