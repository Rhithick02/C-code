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
    string s,t;
    cin>>s>>t;
    int ss[26],tt[26],flag=0;
    memset(ss,0,sizeof(ss));
    memset(tt,0,sizeof(tt));
    For(i,s.length()) ss[s[i]-'a']++;
    For(i,t.length()) tt[t[i]-'a']++;
    For(i,26)
    {
        if(tt[i]>ss[i])
        {
            flag=4;
            break;
        }
    }
    if(flag==4 || s.length()<t.length()) cout<<"need tree";
    else
    {
        For(i,26)
        {
            if(ss[i]!=tt[i])
            {
                flag=2;
                break;
            }
        }
        if(flag!=2) cout<<"array";
        else
        {
            set<int> te;
            int x=s.length()-1,temp=0;
            for(int i=t.length()-1;i>=0;i--)
            {
                temp=0;
                for(int j=x;j>=0;j--)
                {
                    if(t[i]==s[j]) 
                    {
                        if(te.size()!=0 && j>*te.begin()) flag=-1;
                        else te.insert(j),temp=-1,x=j-1;
                        break;
                    }
                }
                if(flag==-1 || temp==0) break;
            }
            if(flag==-1 || temp==0) cout<<"both";
            else cout<<"automaton";
        }
    }
    return 0;
}