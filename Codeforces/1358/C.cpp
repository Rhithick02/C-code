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
    int t;
    cin>>t;
    while(t--)
    {
        lli x1,x2,y1,y2,ans=1;
        cin>>x1>>y1>>x2>>y2;
        ans+=(x2-x1)*(y2-y1);
        cout<<ans<<endl;
    }
    return 0;
}