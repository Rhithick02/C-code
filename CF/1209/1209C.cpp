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
        int n,fl=0;
        string s,te="",st="";
        vi one;
        cin>>n>>s;
        vector<char> ans(n);
        one.pb(0);
        For(i,1,n){
            if(s[i]>=s[one[one.size()-1]]) one.pb(i);
            else{
                while(one.size() && s[one[one.size()-1]]>s[i]) one.pop_back();
                one.pb(i);
            }
        }
        for(auto it:one) ans[it]='1';
        For(i,0,n) if(ans[i]!='1') ans[i]='2',st+=s[i];
        int r=st.length()-1;
        while(r>=0 && s[one[one.size()-1]]>=st[r]) ans[one[one.size()-1]]='2',one.pop_back();
        For(i,0,n) if(ans[i]=='1') te+=s[i];
        For(i,0,n) if(ans[i]=='2') te+=s[i];
        For(i,0,n-1){
            if(te[i]>te[i+1]){
                fl=1;
                break;
            }
        }
        if(fl) cout<<"-";
        else for(auto it:ans) cout<<it;
        cout<<endl;
    }
    return 0;
}