#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define pa pair<int,int>
#define pal pair<long long,long long>
#define vpa vector<pair<int,int>>
#define vpal vector<pair<long long,long long>>
#define fi first
#define se second

int main(){
    int n,fl=0;
    cin>>n;
    vi ar(n);
    For(i,n)
    {
        cin>>ar[i];
        if(i && ar[i]<=ar[i-1]) fl=-1;
    }
    if(fl==0) cout<<0<<endl;
    else
    {
        fl=0;
        cout<<n<<endl;
        cout<<1<<" "<<n<<" "<<200000<<endl;
        For(i,n-1)
        {
            cout<<2<<" "<<i+1<<" "<<ar[i]+200000-fl<<endl;
            fl++;
        }
    }
    return 0;
}