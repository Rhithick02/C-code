#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
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
int n;
bool check(int x,int y)
{
    return x>=0 && y>=0 && x<n && y<n;
}
int main(){
    int fl=0;
    cin>>n;
    vpa forw,rev;
    int r[2],c[2];
    cin>>r[0]>>c[0]>>r[1]>>c[1];
    vector<string> s(n);
    For(i,n) cin>>s[i];
    queue<pa> q;
    q.push({r[0]-1,c[0]-1});
    int dx[]={-1,0,1},dy[]={-1,0,1};
    forw.pb({r[0]-1,c[0]-1});
    rev.pb({r[1]-1,c[1]-1});
    while(!q.empty())
    {
        pa cur=q.front();
        q.pop();
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(abs(i-j)!=1 || !check(cur.fi+dx[i],cur.se+dy[j])) continue;
                int x=cur.fi+dx[i],y=cur.se+dy[j];
                if(x==r[1]-1 && y==c[1]-1) 
                {
                    fl=1;
                    break;
                }
                if(s[x][y]=='0') 
                {
                    q.push({x,y});
                    forw.pb({x,y});
                    s[x][y]=1;
                }
            }
            if(fl) break;
        }
        if(fl) break;
    }
    if(fl) cout<<0<<endl;
    else 
    {
        q.push({r[1]-1,c[1]-1});
        while(!q.empty())
        {
            pa cur=q.front();
            q.pop();
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    if(abs(i-j)!=1 || !check(cur.fi+dx[i],cur.se+dy[j])) continue;
                    int x=cur.fi+dx[i],y=cur.se+dy[j];
                    if(s[x][y]=='0') 
                    {
                        q.push({x,y});
                        rev.pb({x,y});
                        s[x][y]=1;
                    }
                }
            }
        }
        int mini=1e9;
        for(int i=0;i<forw.size();i++)
        {
            for(int j=0;j<rev.size();j++)
            {
                int xdist=forw[i].fi-rev[j].fi,ydist=forw[i].se-rev[j].se;
                mini=min(mini,xdist*xdist+ydist*ydist);
            }
        }
        cout<<mini<<endl;
    }
    return 0;
}