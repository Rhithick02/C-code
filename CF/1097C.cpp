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
    vector<string> s(n),ar(n);
    For(i,n) cin>>s[i];
    For(i,n)
    {
        For(j,s[i].size())
        {
            if(s[i][j]=='(') ar[i].pb(s[i][j]);
            else if(s[i][j]==')') 
            {
                if(!ar[i].size()) ar[i].pb(s[i][j]);
                else (ar[i].back()=='('? ar[i].pop_back(): ar[i].pb(s[i][j]));
            }
        }
    }
    vi te(1000001);
    For(i,n)
    {
        int si=ar[i].size();
        if(!si) te[0]++;
        else if(ar[i][0]=='(' && ar[i][si-1]=='(') te[ar[i].size()]++;
        else if(ar[i][0]==')' && ar[i][si-1]==')') te[500000+ar[i].size()]++;
    }
    count+=te[0]/2;
    for(int i=1;i<=5e5;i++) count+=min(te[i],te[i+500000]);
    cout<<count<<endl;
    return 0;
}