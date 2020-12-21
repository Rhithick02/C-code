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

void swap(int &a, int &b)
{
    int temp=b;
    b=a,a=temp;
}
int main(){
    int n,m,col=0,row=0;
    cin>>n>>m;
    int a[n][m],b[n][m];
    For(i,n) For(j,m) cin>>a[i][j];
    For(i,n) For(j,m) cin>>b[i][j];
    For(i,n)
    {
        For(j,m)
        {
            if(col>0) col--;
            if(row>0) row--;
            if(j!=m-1)
            {
                if(a[i][j]>=a[i][j+1] || b[i][j]>=b[i][j+1])
                {
                    if(b[i][j]<a[i][j+1] && a[i][j]<b[i][j+1] && col!=1) 
                        swap(b[i][j],a[i][j]);
                    else if(b[i][j+1]>a[i][j] && a[i][j+1]>b[i][j]) 
                        swap(b[i][j+1],a[i][j+1]),col=2;
                    else col=-1;
                }
            }
            if(col==-1) break;
            if(i!=n-1)
            {
                if(a[i][j]>=a[i+1][j] || b[i][j]>=b[i+1][j])
                {
                    if(b[i][j]<a[i+1][j] && a[i][j]<b[i+1][j] && row!=1) 
                        swap(b[i][j],a[i][j]);
                    else if(b[i+1][j]>a[i][j] && a[i+1][j]>b[i][j]) 
                        swap(b[i+1][j],a[i+1][j]),row=2;
                    else row=-1;
                }
            }
            if(row==-1) break;
        }
        if(col==-1 || row==-1) break;
    }
    if(col==-1 || row==-1) cout<<"Impossible";
    else cout<<"Possible" ;
    cout<<endl;
    return 0;
}