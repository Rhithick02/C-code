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
    int t;
    cin>>t;
    while(t--)
    {
        lli n,k,fl=0;
        string s;
        cin>>n>>k>>s;
        For(i,0,s.length())
        {
            if(s[i]=='1') continue;
            int pos=min(i-fl,k);
            swap(s[i],s[i-pos]);
            k-=pos,fl++;
            if(k==0) break;
        }
        cout<<s<<endl;
    }
    return 0;
}