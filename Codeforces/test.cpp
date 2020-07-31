#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define mod 1000000007
#define lli long long
#define fi first
#define se second
#define pb emplace_back
#define FOR(i,n) for(int i=0;i<n;i++)
#define FORR(x,v) for(auto x : v)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MAXC 200005
// %

int n, m, a, b, t, q, ok, cnt;
lli k, r, x, y, z, ans;

int main(int argc, char **argv)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        n=rand()%10+1;
        k=rand()%(n-1)+1;
        z=rand()%6;
        vector< int > v(n), pref(n+1), M(n+1),ar(n),st;
        FOR(i, n){
            v[i]=rand()%20;
            ar[i]=v[i];
            pref[i+1] = pref[i] + v[i];
            if(i>=1){
                M[i+1] = max(M[i], v[i]+v[i-1]);
            }
        }
        int ans = pref[k+1],sum=0;
        for(int i=1;i<=z;i++){
            if(k < 2*i) break;
            int end = 1 + k - 2*i;
            ans = max(ans, pref[end] + i*M[end]);
        }
        for(int i=1;i<=z;i++){
            if(k <= 2*i - 1) break;
            int end = 1 + k - 2*i + 1;
            ans = max(ans, pref[end] + (i-1)*M[end] + v[end-2]);
        }
        for(int i=k;i>=1;i--){
            int te[2]={ar[i],ar[i-1]};
            sum=pref[i+1],x=k-i;
            if(x>=2*z) sum+=z*(te[1]+te[0]),x-=2*z;
            else sum+=(x/2)*(te[0]+te[1])+x%2*(te[1]),x=0;
            if(x) sum+=pref[i+x+1]-pref[i+1];
            st.pb(sum);
        }
        if(*max_element(st.begin(),st.end())!=ans){
            cout<<n<<" "<<k<<" "<<z<<"\n";
            for(auto it: v) cout<<it<<" ";
            cout<<"\n"<<ans<<" "<<sum;
            break;
        }
    }
    return 0;
}
