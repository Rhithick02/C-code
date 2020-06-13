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
#define mod 1000000007

bool sortbylen(const string &a, const string &b)
{
    return a.length()>b.length();
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int pos=0;
        vector<string> st;
        string s,pref,suf;
        cin>>s;
        int n=s.length();
        For(i,0,n)
        {
            if(s[i]!=s[n-1-i]) break;
            pos++;
        }
        if(pos==n)
        {
            cout<<s<<endl;
            continue;
        }
        int te=-1;
        pal sum1={0,0},sum2={0,0},p={127,61},po={1,1};
        For(i,pos,n-pos-1)
        {
            sum1.fi+=(s[i]-'a'+1)*po.fi;
            sum1.fi%=mod;
            sum2.fi=(sum2.fi*p.fi+(s[i]-'a'+1))%mod;
            po.fi=(p.fi*po.fi)%mod;
            sum1.se+=(s[i]-'a'+1)*po.se;
            sum1.se%=mod;
            sum2.se=(sum2.se*p.se+(s[i]-'a'+1))%mod;
            po.se=(p.se*po.se)%mod;
            if(sum1==sum2) te=i;
        }
        pref=s.substr(0,te+1),suf=s.substr(n-pos,n);
        st.pb(pref+suf);
        sum1={0,0},sum2={0,0},p={127,61},po={1,1};
        for(int i=n-pos-1;i>pos;i--)
        {
            sum1.fi+=(s[i]-'a'+1)*po.fi;
            sum1.fi%=mod;
            sum2.fi=(sum2.fi*p.fi+(s[i]-'a'+1))%mod;
            po.fi=(p.fi*po.fi)%mod;
            sum1.se+=(s[i]-'a'+1)*po.se;
            sum1.se%=mod;
            sum2.se=(sum2.se*p.se+(s[i]-'a'+1))%mod;
            po.se=(p.se*po.se)%mod;
            if(sum1==sum2) te=i;
        }
        pref=s.substr(0,pos),suf=s.substr(te,n);
        st.pb(pref+suf);
        sort(asc(st),sortbylen);
        cout<<st[0]<<endl;
    }
    return 0;
}