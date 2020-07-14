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
        char temp='a',replace;
        int s_st[26]={0},pos=0;
        string s,c;
        cin>>s>>c;
        if(s<c){
            cout<<s<<"\n";
            continue;
        }
        For(i,0,r(s)) s_st[s[i]-'A']++;
        For(i,0,26){
            if(!s_st[i]) continue;
            for(int j=0;j<r(s) && s_st[i]>0;j++){
                if(s[j]<='A'+i){
                    if(s[j]=='A'+i) s_st[i]--;
                    continue;
                }
                temp=s[j];
                s[j]='A'+i;
                replace=s[j];
                break;
            }
            if(temp!='a') break;
        }
        For(i,0,r(s)){
            if(s[r(s)-1-i]==replace){
                s[r(s)-1-i]=temp;
                break;
            }
        }
        if(s<c) cout<<s<<"\n";
        else cout<<"---\n";
    }
    return 0;
}