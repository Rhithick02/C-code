#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
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
    ios::sync_with_stdio(false);
    lli k,val=1;
    cin>>k;
    vi st(10,1);
    string te="codeforces",s="";
    while(val<k)
    {
        For(i,0,10)
        {
            val=(val*(st[i]+1))/st[i];
            st[i]++;
            if(val>=k) break;
        }
    }
    For(i,0,10) For(j,0,st[i]) s+=te[i];
    cout<<s<<endl;
    return 0;
}