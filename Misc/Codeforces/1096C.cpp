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

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while (t--) {
        int angle, num, k, factor;
        cin>>angle;
        factor = __gcd(180, angle);
        num = 180 / factor;
        k = angle / factor;
        if (k <= num-2) cout<<num<<"\n";
        else cout<<2*num<<"\n";
    }
}