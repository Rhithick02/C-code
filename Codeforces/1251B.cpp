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

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,need=0;
        cin>>n;
        vector<string> str(n);
        For(i,n) cin>>str[i];
        For(i,n)
        {
            if(str[i].size()&1) count++;
            else 
            {
                int n0=0,n1=0;
                For(j,str[i].size()) (str[i][j]=='0'? n0:n1)++;
                if(n0&1) need++;
            }
        }
        if(count!=0 || need%2==0) cout<<n;
        else cout<<n-1;
        cout<<endl;
    }
    return 0;
}