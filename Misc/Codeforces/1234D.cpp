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
#define n s.length()

int main(){
    ios::sync_with_stdio(false);
    string s;
    int q,que,l,r,pos;
    char ch;
    cin>>s>>q;
    set<int> te[26];
    For(i,0,n) te[s[i]-'a'].insert(i+1);
    For(i,0,q){
        cin>>que;
        if(que==1){
            cin>>pos>>ch;
            te[s[pos-1]-'a'].erase(pos);
            te[ch-'a'].insert(pos);
            s[pos-1]=ch;
            continue;
        }
        int cnt=0;
        cin>>l>>r;
        For(j,0,26) {
            auto it = te[j].lower_bound(l);
            if(it!=te[j].end() && *it<=r) cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}