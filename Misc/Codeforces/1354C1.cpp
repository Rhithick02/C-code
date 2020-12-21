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
        int n;
        cin>>n;
        double pi=acos(-1);
        double side=1/tan(pi/(2.0*n));
        cout<<fixed<<setprecision(20)<<side<<endl;
    }
    return 0;
}