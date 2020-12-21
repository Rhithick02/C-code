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
    ios::sync_with_stdio(false);
    int n,m,x,y,X,Y,fl=1;
    cin>>n>>m>>x>>y;
    X=x,Y=y;
    For(i,0,n){
        cout<<x<<" "<<y<<"\n";
        if(x-1>=1 && fl) x--;
        else if(x-1==0){
            fl=0;
            x=X+1;
        }
        else x++;
    }
    x--,fl=0;
    For(i,1,Y){
        fl^=1;
        y--;
        For(j,0,n){
            cout<<x<<" "<<y<<"\n";
            if(fl) x--;
            else x++;
        }
        if(!x) x=1;
        else x=n;
    }
    if(x==1) fl=1;
    else fl=0;
    y=Y;
    For(i,0,m-Y){
        y++;
        fl^=1;
        For(j,0,n){
            cout<<x<<" "<<y<<"\n";
            if(fl) x--;
            else x++;
        }
        if(!x) x=1;
        else x=n;
    }
}