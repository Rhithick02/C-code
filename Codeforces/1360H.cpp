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
        int m,n;
        cin>>n>>m;
        vil ar;
        lli k,temp;
        string s;
        For(i,n)
        {
            temp=0;
            cin>>s;
            For(i,s.length())
                temp+=(lli)pow(2,i)*(s[s.length()-1-i]-'0');
            ar.pb(temp);
        }
        k=((lli)pow(2,m)-n-1)/2;
        sort(asc(ar));
        for(int i=0;i<n && ar[i]<=k;i++)
            k++;
        s="";
        while(m--)
        {
            s+=to_string(k%2);
            k/=2;
        }
        For(i,s.length()) cout<<s[s.length()-1-i];
        cout<<endl;
    }
    return 0;
}