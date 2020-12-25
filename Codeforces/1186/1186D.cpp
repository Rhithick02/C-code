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
    lli sum=0;
    int n;
    cin>>n;
    vector<double> ar(n);
    vi st;
    For(i,0,n){
        cin>>ar[i];
        if(ar[i]>=0) sum+=(int)ar[i],st.pb((int)ar[i]);
        else{
            if((int)ar[i]==ar[i]) sum+=(int)ar[i],st.pb((int)ar[i]);
            else sum+=(int)ar[i]-1,st.pb((int)ar[i]-1);
        }
    }
    if(sum<0){
        For(i,0,n){
            if((int)ar[i]==ar[i]) continue;
            st[i]++;
            sum++;
            if(!sum) break;
        }
    }
    for(auto it:st) cout<<it<<endl;
    return 0;
}
