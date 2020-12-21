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
    int t;
    cin>>t;
    while(t--){
        int fl=0,n,cnt=0;
        vi st(26);
        vpa res;
        string s,t;
        cin>>n>>s>>t;
        For(i,0,n) st[s[i]-'a']++,st[t[i]-'a']++;
        For(i,0,26) if(st[i]&1) fl=1;
        if(fl){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        For(i,0,n){
            fl=0;
            if(s[i]==t[i]) continue;
            For(j,i+1,n){
                if(t[j]!=t[i]) continue;
                cnt++;
                res.pb({i+1,j+1});
                swap(s[i],t[j]);
                fl=1;
                break;
            }
            if(!fl){
                For(j,i+1,n){
                    if(s[j]!=t[i]) continue;
                    cnt+=2;
                    res.pb({j+1,n}),swap(s[j],t[n-1]);
                    res.pb({i+1,n}),swap(s[i],t[n-1]);
                    break;
                }
            }
        }
        cout<<cnt<<"\n";
        for(auto it: res) cout<<it.fi<<" "<<it.se<<"\n";
    }
    return 0;
}