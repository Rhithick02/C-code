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
        int a,b,temp;
        cin>>temp>>b;
        if(temp>b) a=b,b=temp;
        else a=temp;
        if(a==b) cout<<4*b*b;
        else if(b%a==0) cout<<b*b;
        else cout<<max(4*a*a,b*b);
        cout<<endl;
    }
    return 0;
}