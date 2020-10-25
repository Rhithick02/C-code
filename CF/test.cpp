#include <bits/stdc++.h>

// 1. dp
typedef long double ld;
#define int long long

#define gcd            __gcd
#define endl           "\n"
#define setbits(x)     __builtin_popcountll(x)
#define zrobits(x)     __builtin_ctzll(x)
#define mod            1000000007
#define mod2           998244353
#define maxe           *max_element
#define mine           *min_element
#define inf            1e18
#define pb             push_back
#define all(x)         x.begin(), x.end()
#define f              first
#define s              second
#define lb             lower_bound
#define ub             upper_bound
#define ins            insert
#define sz(x)          (int)(x).size()
#define mk             make_pair
#define deci(x, y)     fixed<<setprecision(y)<<x
#define w(t)           int t; cin>>t; while(t--)
#define nitin          ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define PI             3.141592653589793238
using namespace std;
int fact[1001];
void f()
{
    fact[0]=1;
    for(int i=1;i<=1000;i++)
    {
        fact[i]=fact[i-1]*i;
        fact[i]%=mod;
    }
}

int power(int x, int y, int p) {
    int res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int modi(int a, int m) {
    return power(a, m - 2, m);
}
int ncr(int n,int r)
{
    if(r>n)
        return 0;
    return (fact[n]*modi((fact[n-r])%mod,mod))%mod;
}
void solve() {
    int n,x,pos;
    cin>>n>>x>>pos;
    int l=0;
    int r=n;
    int greater=0;
    int smaller=0;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(pos==mid)
        {
            l=mid+1;
        }
        else if(pos>mid)
        {
            smaller++;
            l=mid+1;
        }
        else{
            greater++;
            r=mid;
        }
    }
    cout<<((ncr((n-x),greater)*ncr((x-1),smaller))%mod*fact[n-greater-smaller-1])%mod<<endl;

}

int32_t main() {
    nitin;
    f();
    solve();
}
