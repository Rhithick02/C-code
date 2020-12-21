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
        lli sum=0,flag;
        int n,x;
        cin>>n;
        vil st(n+1);
        For(i,n) cin>>x,st[x]++;
        sort(des(st));
        sum=flag=st[0];
        for(int i=1;st[i]>0;i++)
        {
            if(!flag) break;
            flag=min(flag-1, st[i]);
            sum+=flag;
        }
        cout<<sum<<endl;
    }
    return 0;
}
