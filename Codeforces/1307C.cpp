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
    lli st=0;
    string s;
    vi ar(26);
    cin>>s;
    For(i,0,s.length()) ar[s[i]-'a']++;
    st=*max_element(asc(ar));
    For(i,0,26)
    {
        if(!ar[i]) continue;
        For(j,0,26)
        {
            if(!ar[j]) continue;
            lli count=0,ans=0,fl=0;
            For(k,0,s.length())
            {
                if(s[k]=='a'+j) count++;
                if(s[k]=='a'+i) ans+=fl*count,fl++,count=0;
            }
            ans+=fl*count;
            st=max(st,ans);
        }
    }
    cout<<st<<endl;
    return 0;
}