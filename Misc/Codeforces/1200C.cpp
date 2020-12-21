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
    lli n,m,q;
    cin>>n>>m>>q;
    For(i,q)
    {
        lli x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        lli common=__gcd(n,m);
        lli grp1=(x1==1? n:m)/common;
        lli grp2=(x2==1? n:m)/common;
        if((y1+grp1-1)/grp1!=(y2+grp2-1)/grp2) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
    return 0;
}