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
        int h,n,temp,cnt=0;
        cin>>h>>n;
        vi ar(n);
        For(i,0,n) cin>>ar[i];
        temp = ar[1];
        For(i,0,n-1){
            if(ar[i]-temp==1) cnt++;
            temp = ar[i+1]+1;
        }
        if(ar[n-1]-temp==1) cnt++;
        cout<<cnt<<"\n";
    }
    return 0;
}