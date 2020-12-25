#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        if(n/k>=m) cout<<m;
        else
        {
            int rem=m-n/k;
            cout<<n/k-ceil(rem*1.0/(k-1));
        }
        cout<<endl;
    }
    return 0;
}