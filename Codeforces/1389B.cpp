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
#define MAX 300001
int n,k,z,x,sum,res=0;
vi pref(MAX),ar(MAX),st;
void tot(){
    for(int i=k;i>=1;i--){
        int te[2]={ar[i],ar[i-1]};
        sum=pref[i],x=k-i;
        if(x>=2*z) sum+=z*(te[1]+te[0]),x-=2*z;
        else sum+=(x/2)*(te[0]+te[1])+x%2*(te[1]),x=0;
        if(x) sum+=pref[i+x]-pref[i];
        res=max(res,sum);
    }
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        st.clear(),res=0;
        cin>>n>>k>>z;
        For(i,0,n){
            cin>>ar[i];
            pref[i]=ar[i]+(!i?0:pref[i-1]);
        }
        tot();
        cout<<res<<"\n";
    }
    return 0;
}