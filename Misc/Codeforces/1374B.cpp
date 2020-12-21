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
        int n,count=0,fl=0;
        cin>>n;
        while(n>1){
            if(n%6==0) count++,n/=6;
            else if((2*n)%6==0) count+=2,n/=3;
            else{
                fl=1;
                break;
            }
        }
        if(fl || n!=1) cout<<-1<<endl;
        else cout<<count<<endl;
    }
    return 0;
}