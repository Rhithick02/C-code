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

int n,m;
bool check(int x,int y)
{
    return x>=0 && y>=0 && x<n && y<m;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int ar[n][m];
        memset(ar,-1,sizeof(ar));
        vector<string> str(n);
        vpa good,bad;
        For(i,n)
        {
            For(j,m)
            {
                char c;
                cin>>c;
                str[i]+=c;
                if(c=='#') ar[i][j]=1;
                else if(c=='B') bad.pb({i,j});
                else if(c=='G') good.pb({i,j});
            }
        }
        if(!good.size()) 
        {
            cout<<"YES"<<endl;
            continue;
        }
        int dx[]={-1,0,1},dy[]={-1,0,1};
        int flag=0;
        For(i,bad.size())
        {
            For(j,3)
            {
                For(k,3)
                {
                    if(abs(dx[j]-dy[k])!=1 || !check(bad[i].fi+dx[j],bad[i].se+dy[k])) 
                        continue;
                    int x=bad[i].fi+dx[j],y=bad[i].se+dy[k];
                    if(str[x][y]=='.') 
                        ar[x][y]=1;
                    else if(str[x][y]=='G') flag=-1;
                }
                if(flag==-1) break;
            }
            if(flag==-1) break;
        }
        if(flag==-1 || ar[n-1][m-1]==1) cout<<"NO";
        else
        {
            queue<pa> q;
            q.push({n-1,m-1});
            while(!q.empty())
            {
                pa current=q.front();
                q.pop();
                For(j,3)
                {
                    For(k,3)
                    {
                        if(abs(dx[j]-dy[k])!=1 || !check(current.fi+dx[j],current.se+dy[k]))
                            continue;
                        int x=current.fi+dx[j],y=current.se+dy[k];
                        if(ar[x][y]==1) continue;
                        ar[x][y]=1, q.push({x,y});
                    }
                }
            }
            For(i,n)
            {
                For(j,m)
                {
                    if(str[i][j]=='G' && ar[i][j]==-1) 
                    {
                        flag=-1;
                        break;
                    }
                }
                if(flag==-1) break;
            }
            if(flag==-1) cout<<"NO";
            else cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}