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
        int n;
        cin>>n;
        if(n<=3){
            cout<<-1<<"\n";
            continue;
        }
        deque<int> ar={3,1,4,2};
        for(int i=5;i<=n;i++){
            if(i&1) ar.push_back(i);
            else ar.push_front(i);
        }
        for(auto it: ar) cout<<it<<" ";
        cout<<"\n";
    }
    return 0;
}