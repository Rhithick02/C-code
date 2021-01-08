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
    int n,m,x=1e9;
    cin>>n>>m;
    vi a(n),b(n);
    For(i,0,n) cin>>a[i];
    For(i,0,n) cin>>b[i];
    sort(asc(a)),sort(asc(b));
    For(i,0,n) 
    {
        int temp=(b[0]-a[i]+m)%m,fl=0;
        For(j,0,n) 
        {
            if((a[(j+i)%n]-b[j]+temp)%m) 
            {
                fl=-1;
                break;
            }
        }
        if(!fl) x=min(x,temp);
    }
    cout<<x<<endl;
    return 0;
}