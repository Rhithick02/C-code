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
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,time,ptime=0,low,high,minrange,maxrange,fl=0;
        cin>>n>>m;
        minrange=maxrange=m;
        For(i,0,n)
        {
            cin>>time>>low>>high;
            if(minrange-time+ptime<=high && maxrange+time-ptime>=low)
            {
                minrange=max(minrange-time+ptime,low);
                maxrange=min(maxrange+time-ptime,high);
            }
            else fl=-1;
            ptime=time;
        }
        if(!fl) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}