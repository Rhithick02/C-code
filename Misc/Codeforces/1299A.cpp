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
    int n;
    cin>>n;
    vi ar(n);
    For(i,0,n) cin>>ar[i];
    for(int i=30;i>=0;i--){
        int cnt=0, fl=-1;
        For(j, 0, n){
            if(ar[j] & (1<<i)) cnt++, fl=j;
        }
        if(cnt==1) 
        {
            swap(ar[fl], ar[0]);
            break;
        }
    }
    for(auto it: ar) cout<<it<<" ";
    cout<<endl;
    return 0;
}
