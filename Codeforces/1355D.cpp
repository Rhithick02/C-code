#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define fi first
#define se second

int main(){
    int n,s,flag=0;
    cin>>n>>s;
    vi ar(n);
    For(i,n-1) ar[i]=1;
    ar[n-1]=s-(n-1);
    if(s-n<n)
        cout<<"NO";
    else
    {
        cout<<"YES\n";
        For(i,n) cout<<ar[i]<<" ";
        cout<<endl<<n;
    }
    cout<<endl;
    return 0;
}