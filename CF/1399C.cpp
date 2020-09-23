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
        int n,res=0;
        cin>>n;
        set<int> st;
        vi ar(n),te(n+1);
        For(i,0,n) cin>>ar[i],te[ar[i]]++;
        For(i,0,n) For(j,i+1,n) st.insert(ar[i]+ar[j]);
        for(auto it:st){
            int cnt=0;
            vi temp=te;
            For(i,0,n){
                if(temp[ar[i]]<=0 || it-ar[i]<=0 || it-ar[i]>n || temp[it-ar[i]]<=0) continue;
                if(ar[i]==it-ar[i]){
                    if(temp[ar[i]]>1) cnt++,temp[ar[i]]-=2;
                }
                else if(temp[ar[i]]>0 && temp[it-ar[i]]>0)
                    cnt++,temp[it-ar[i]]--,temp[ar[i]]--;
            }
            res=max(res,cnt);
        }
        cout<<res<<"\n";
    }
}