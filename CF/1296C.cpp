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
        int n,x=0,y=0,ans=1e9,l=0,r=0;
        string s;
        cin>>n;
        cin>>s;
        vector<pair<pair<int,int>,int>> ar(n+1);
        ar[0]={{0,0},0};
        For(i,0,n)
        {
            if(s[i]=='R') x++;
            else if(s[i]=='L') x--;
            else if(s[i]=='U') y++;
            else y--;
            ar[i+1]={{x,y},i+1};
        }
        sort(asc(ar));
        For(i,0,n) 
        {
            if(ar[i].fi==ar[i+1].fi)
            {
                if(ans>abs(ar[i+1].se-ar[i].se))
                {
                    ans=abs(ar[i+1].se-ar[i].se);
                    l=min(ar[i+1].se,ar[i].se);
                    r=max(ar[i+1].se,ar[i].se);
                }
            }
        }
        if(ans==1e9) cout<<-1;
        else cout<<l+1<<" "<<r;
        cout<<endl;
    }
    return 0;
}