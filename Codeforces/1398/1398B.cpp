#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second
#define n s.length()

bool check(string s){
    int cnt = 0;
    For(i, 0, s.length()){
        if(s[i] == '1')
            return true;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int cnta = 0, cntb = 0, fl = 0;
        string s;
        cin>>s;
        while(check(s)){
            int te = 0, pos = 0, buf = 0;
            For(i,0,n){
                if(s[i] == '1') te++;
                else{
                    buf = max(te, buf);
                    te = 0;
                }
            }
            buf = max(te, buf);
            te = 0;
            For(i,0,n){
                if(s[i] == '1') te++;
                else te = 0;
                if(te == buf){
                    pos = i-te+1;
                    break;
                }
            }
            string te_ = s;
            int si = s.length();
            s = "";
            For(i,0,pos) s += te_[i];
            For(i,pos+te, si) s += te_[i];
            if(!fl){
                cnta += buf;
                fl ^= 1;
            }
            else{
                cntb += buf;
                fl ^= 1;
            }
        }
        cout<<cnta<<"\n";
    }
}