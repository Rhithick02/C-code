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
    int n,m;
    bool ok = false;
    cin>>n>>m;
    vi a(n),b(m);
    For(i,0,n) cin>>a[i];
    For(i,0,m) cin>>b[i];
    For(i,0,512){
        For(j,0,n){
            ok = false;
            For(k,0,m){
                if(((a[j]&b[k])|i) == i) ok = true;
            }
            if(!ok) break;
        }
        if(ok){
            cout<<i<<"\n";
            break;
        }
    }
}