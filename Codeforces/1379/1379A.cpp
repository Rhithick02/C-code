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

int n,fl=0;
string s,temp="abacaba";
void yes(){
    For(i,0,n) if(s[i]=='?') s[i]='z';
    cout<<"YES\n"<<s<<"\n";
}
int count(string st){
    int cnt=0;
    For(i,0,n){
        string te=st.substr(i,7);
        if(te==temp) cnt++;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>s;
        For(i,0,n-6){
            fl=0;
            string st=s;
            For(j,0,7){
                if(st[i+j]!='?' && st[i+j]!=temp[j]){
                    fl=1;
                    break;
                }
                st[i+j]=temp[j];
            }
            if(fl) continue;
            if(count(st)==1){
                s=st,fl=-1;
                break;
            }
        }
        if(fl<0) yes();
        else cout<<"NO\n";
    }
    return 0;
}