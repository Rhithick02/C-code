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

int n,count=0;
vector<bool> check(2e5+50,false);
vi ar[200000+50];
void dfs(int x, vector<int> ar[])
{
    check[x]=true;
    for(auto it: ar[x]) if(!check[it]) dfs(it,ar);
}

int main(){
    cin>>n;
    string s;
    For(i,0,n)
    {
        cin>>s;
        For(j,0,s.length()) 
        {
            ar[i].pb(n+s[j]-'a');
            ar[n+s[j]-'a'].pb(i);
        }
    }
    For(i,n,n+26)
    {
        if(!ar[i].size() || check[i]) continue;
        dfs(i,ar);
        ::count++;
    }
    cout<<::count<<endl;
    return 0;
}