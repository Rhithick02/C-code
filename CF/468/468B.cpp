#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define fi first
#define se second

int main(){
    int m,n,flag=0,count=-1;
    cin>>m>>n;
    int ar[m][n],st[m][n];
    For(i,m) 
        For(j,n) 
        {
            cin>>ar[i][j],st[i][j]=-1;
            if(ar[i][j]) count=0;
        }
    if(count==-1)
    {
        cout<<"YES\n";
        For(i,m) 
        {
            For(j,n) cout<<ar[i][j]<<" ";
            cout<<endl;
        }
    }
    else            
    {
        For(i,m)
        {
            For(j,n)
            {
                flag=0;
                if(!ar[i][j])
                {
                    st[i][j]=0;
                    continue;
                }
                For(k,n) 
                {
                    if(!ar[i][k]) 
                    {
                        flag--;
                        break;
                    }
                }
                For(k,m)
                {
                    if(!ar[k][j])
                    {
                        flag--;
                        break;
                    }
                }
                if(flag==-2) break;
                else if(!flag) st[i][j]=1,count++;
            }
            if(flag==-2) break;
        }
        if(flag==-2 || count==0) cout<<"NO\n";
        else 
        {
            cout<<"YES\n";
            For(i,m)
            {
                For(j,n)
                {
                    if(st[i][j]==-1) st[i][j]=0;
                    cout<<st[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}