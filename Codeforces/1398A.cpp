#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ar(n);
        For(i,0,n) cin>>ar[i];
        if (ar[0] + ar[1] <= ar[n-1]) 
            cout<<"1 2 "<<n<<"\n";
        else 
            cout<<"-1\n";
    }
}