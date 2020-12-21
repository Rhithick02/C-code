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
    int n;
    cin>>n;
    vi ar(n),st(11);
    For(i,0,n) cin>>ar[i],st[ar[i]]++;
    int res=n;
    For(i,0,n){
        int prev=0,fl=0;
        For(j,1,11){
            if(!st[j]) continue;
            prev=0,fl=0;
            st[j]--;
            For(k,1,11){
                if(!st[k]) continue;
                if(!prev) prev=st[k];
                else if(st[k]!=prev){
                    fl=1;
                    break;
                }
            }
            if(!fl) break;
            st[j]++;
        }
        if(!fl) break;
        st[ar[n-1-i]]--;
        res--;
    }
    cout<<res<<endl;
    return 0;
}