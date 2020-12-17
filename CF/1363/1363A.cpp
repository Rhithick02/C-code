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
        int n,x,count=0;
        cin>>n>>x;
        vi ar(n);
        For(i,n)
        {
            cin>>ar[i];
            if(ar[i]&1) count++;
        }
        if(x<count)
        {
            if(x&1 || count!=n) cout<<"YES";
            else cout<<"NO";
        }
        else if(x>=count)
        {
            if(count&1) cout<<"YES";
            else if(count!=0 && n-1>=x) cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}