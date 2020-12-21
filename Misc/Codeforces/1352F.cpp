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
        int n0,n1,n2;
        cin>>n0>>n1>>n2;
        string s="";
        if(n0 || n2)
        {
            if(n1 || n2) For(i,n2+1) s+='1';
            if(n0) 
            {
                For(i,n0+1) s+='0';
                For(i,n1-1) s+=(i&1 ? '0':'1');
            }
            else For(i,n1) s+=(i&1 ? '1':'0');
        }
        else For(i,n1+1) s+=(i&1 ? '0':'1');
        cout<<s<<endl;
    }
    return 0;
}