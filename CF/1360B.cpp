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
        vi ar(n);
        set<int> te;
        For(i,n) cin>>ar[i];
        sort(asc(ar));
        for(int i=1;i<n;i++)
            te.insert(ar[i]-ar[i-1]);
        cout<<*te.begin()<<endl;
    }
    return 0;
}