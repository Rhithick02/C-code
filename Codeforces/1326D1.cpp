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

bool sortbylen(const string &a, const string &b)
{
    return a.length()>b.length();
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        vector<string> st;
        string s,pref,suf,tot;
        cin>>s;
        int pos=0,n=s.length(),fl=0;
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
        pref=s.substr(0,pos);
        For(i,pos+1,n-pos)
        {
            fl=0;
            suf=s.substr(i,n);
            tot=pref+suf;
            For(j,0,tot.length())
            {
                if(tot[j]!=tot[tot.length()-1-j])
                {
                    fl=-1;
                    break;
                }
            }
            if(!fl) st.pb(tot);
        }
        suf=s.substr(n-pos,n);
        For(i,pos+1,n-pos+1)
        {
            fl=0;
            pref=s.substr(0,i);
            tot=pref+suf;
            For(j,0,tot.length())
            {
                if(tot[j]!=tot[tot.length()-1-j])
                {
                    fl=-1;
                    break;
                }
            }
            if(!fl) st.pb(tot);
        }
        sort(asc(st),sortbylen);
        cout<<st[0]<<endl;
    }
    return 0;
}