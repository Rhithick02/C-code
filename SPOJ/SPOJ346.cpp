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

lli calc(lli n)
{
    if(n/2+n/4+n/3<=n) return n;
    return calc(n/2)+calc(n/3)+calc(n/4);
}
int main(){
    lli n;
    while(cin>>n)
    {
        cout<<calc(n)<<endl;
    }
    return 0;
}