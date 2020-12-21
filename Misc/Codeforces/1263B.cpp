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
        int n,count=0;
        cin>>n;
        vector<string> str;
        vi ar(10);
        string s;
        For(i,n)
        {
            cin>>s;
            str.pb(s);
        }
        For(i,n)
            ar[str[i][0]-'0']++;
        For(i,n)
        {
            for(int j=i+1;j<n;j++)
            {
                int flag=0;
                if(str[i]==str[j])
                {
                    for(int k=0;k<10;k++)
                    {
                        if(ar[k]) continue;
                        ar[k]++;
                        count++;
                        str[i][0]=k+'0';
                        flag=-1;
                        break;
                    }
                    if(flag==-1) break;
                }
                if(flag==-1) break;
            }
        }
        cout<<count<<endl;
        For(i,n) cout<<str[i]<<endl;
    }
    return 0;
}