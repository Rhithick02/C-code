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
    int n,m,d,len=0,k=0,flag=0;
    cin>>n>>m>>d;
    vi ar(m),st(n);
    For(i,m) cin>>ar[i],len+=ar[i];
    for(int i=0;i<n && k<m;)
    {
        if(len<=n-i-d)
        {
            For(j,ar[k]) 
            {
                if(!k) st[i+j+d-1]=k+1;
                else st[i+j+d]=k+1;
                if(j==ar[k]-1 && !k) i+=j+d-1;
                else if(j==ar[k]-1 && k!=0) i+=j+d;
            }
            len-=ar[k];            
        }
        else
        {
            For(j,ar[k])
            {
                st[j-len+n]=k+1;
                if(j==ar[k]-1) i=j+n-len;                
            }
            len-=ar[k];
        }
        k++;
        if(k==m && i+d<n)
        {
            flag=-1;
            break;
        }
    }
    if(flag==-1) cout<<"NO";
    else
    {
        cout<<"YES\n";
        For(i,n) cout<<st[i]<<" ";
    }
    cout<<endl;
    return 0;
}