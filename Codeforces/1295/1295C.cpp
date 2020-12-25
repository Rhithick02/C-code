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
#define r(x) x.length()

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int fl=0,cnt=0;
        string s,t;
        cin>>s>>t;
        vi t_st(26,0),s_st[26];
        For(i,0,r(t)) t_st[t[i]-'a']++;
        For(i,0,r(s)) s_st[s[i]-'a'].pb(i);
        For(i,0,26) if(t_st[i] && !s_st[i].size()) fl=1;
        if(fl){
            cout<<"-1\n";
            continue;
        }
        fl=s_st[t[0]-'a'][0];
        For(i,1,r(t)){
            auto te=upper_bound(asc(s_st[t[i]-'a']),fl);
            if(te==s_st[t[i]-'a'].end()){
                cnt++;
                fl=s_st[t[i]-'a'][0];
            }
            else fl=*te;
        }
        cout<<cnt+1<<"\n";
    }
    return 0;
}