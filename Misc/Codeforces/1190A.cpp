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
    lli n,m,k;
    cin>>n>>m>>k;
    vil ar(m);
    For(i,m) cin>>ar[i];
    lli count=0,obj=0,temp=0;
    lli page=k;
    For(i,m)
    {
        if(ar[i]-obj<=page)
        {
            temp++;
            continue;
        }
        if(temp) count++;
        obj+=temp;
        temp=0;
        if(ar[i]-obj>page) page+=k*((ar[i]-obj-page+k-1)/k);
        i--;
    }
    if(temp) count++;
    cout<<count<<endl;
    return 0;
}