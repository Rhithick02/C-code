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
    int n,count=0;
    cin>>n;
    vector<string> s(n);
    vi ar(n);
    For(i,n) cin>>s[i];
    For(i,n)
    {
        int fl=0;
        For(j,s[i].size())
        {
            if(s[i][j]=='(') fl++;
            else fl--;
        }
        ar[i]=fl;
    }
    for(auto it: ar) cout<<it<<" ";
    // vi te(1000001);
    // For(i,n)
    // {
    //     if(ar[i]>=0) te[ar[i]]++;
    //     else te[100000+abs(ar[i])]++;
    // }
    // count+=te[0]/2;
    // for(int i=1;i<=100000;i++)
    //     count+=min(te[i],te[100000+i]);
    // cout<<count<<endl;
    return 0;
}

