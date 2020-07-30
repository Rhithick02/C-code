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
    vpa ar(4*n+1);
    For(i,0,4*n+1) cin>>ar[i].fi>>ar[i].se;
    For(i,0,51){
        For(j,0,51){
            For(k,0,51){
                int cnt=0;
                pa te;
                For(l,0,4*n+1){
                    if(!(ar[l].fi==i+k||ar[l].fi==i||ar[l].se==j||ar[l].se==j+k)||ar[l].fi>i+k||ar[l].se>j+k||ar[l].fi<i||ar[l].se<j)
                        cnt++,te=ar[l];
                }
                if(cnt==1){
                    // cout<<i<<" "<<j<<" "<<k;
                    cout<<te.fi<<" "<<te.se<<"\n";
                    return 0;
                }
            }
        }
    }
}
