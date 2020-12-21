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
        lli lecture=0;
        int n,k1,k2,flag=0;
        cin>>n>>k1>>k2;
        int temp=k1;
        string s;
        cin>>s;
        For(i,n)
        {
            if(s[i]=='0')
            {
                flag=0;
                temp=k1;
                continue;
            }
            if(!flag)
            {
                lecture+=k1;
                flag=1;
            }
            else 
            {
                lecture+=min(k2-temp,k1);
                temp=k2-temp;
            }
        }
        cout<<lecture<<endl;
    }
    return 0;
}