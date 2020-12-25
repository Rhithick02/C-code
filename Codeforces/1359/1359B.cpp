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
        int r,c,x,y,sin=0,dou=0;
        cin>>r>>c>>x>>y;
        char ch[r][c];
        For(i,r) For(j,c) cin>>ch[i][j];
        For(i,r)
            For(j,c)
            {
                if(j!=c-1 && ch[i][j]=='.' && ch[i][j+1]=='.')
                    dou++,j++;
                else if(ch[i][j]=='.')
                    sin++;
            }
        if(2*x<=y) cout<<x*(sin+2*dou);
        else cout<<x*sin+y*dou;
        cout<<endl;
    }
    return 0;
}