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
        int n,flag=0;
        cin>>n;
        bool ar[n][n];
        string s;
        For(i,n) 
        {
            cin>>s;
            For(j,n) ar[i][j]=s[j]-48;
        }
        For(i,n)
        {
            For(j,n)
            {
                flag=0;
                if(!ar[i][j]) continue;
                for(int k=j+1;k<n;k++)
                {
                    if(!ar[i][k])
                        flag--;
                    break;
                }
                for(int k=i+1;k<n;k++)
                {
                    if(!ar[k][j])
                        flag--;
                    break;
                }
                if(flag==-2) break;
            }
            if(flag==-2) break;
        }
        if(flag==-2) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
    return 0;
}