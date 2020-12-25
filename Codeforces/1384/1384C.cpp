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
        int n,fl=0,cnt=0;
        vi alp[26];
        string a,b;
        cin>>n>>a>>b;
        For(i,0,n) {
            alp[a[i]-'a'].pb(i);
            if(a[i]>b[i]) fl=1;
        }
        if(fl){
            cout<<-1<<"\n";
            continue;
        }
        For(i,0,20){
            char ch='z';
            vi st;
            for(auto it: alp[i]){
                if(a[it]==b[it]) continue;
                st.pb(it);
            }
            if(!st.size()) continue;
            for(auto it: st) ch=min(ch,b[it]);
            for(auto it: st) a[it]=ch,alp[ch-'a'].pb(it);
            cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}