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
        lli happy=0;
        int n,k,front,end;
        cin>>n>>k;
        vi ar(n),st(k);
        front=0,end=n-1;
        For(i,0,n) cin>>ar[i];
        For(i,0,k) cin>>st[i];
        sort(asc(ar));
        sort(asc(st));
        for(auto it:st){
            if(it>2) break;
            happy+=ar[end--]+(it==1? ar[end+1]:ar[end--]);
        }
        sort(des(st));
        for(auto it: st){
            if(it<=2) break;
            happy+=ar[front]+ar[end--];
            front+=it-1;
        }
        cout<<happy<<endl;
    }
    return 0;
}