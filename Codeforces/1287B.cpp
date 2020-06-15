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
    int n,k,res=0;
    cin>>n>>k;
    vector<string> str(n);
    map<string,int> mp;
    For(i,0,n) cin>>str[i],mp[str[i]]++;
    char ch[]={'S','E','T'};
    For(i,0,n)
    {
        For(j,i+1,n)
        {
            string te="";
            For(q,0,k)
            {
                if(str[i][q]==str[j][q]) te+=str[i][q];
                else For(z,0,3) if(ch[z]!=str[i][q] && ch[z]!=str[j][q]) te+=ch[z];
            }
            if(mp.count(te)) res+=mp[te];
        }
    }
    cout<<res/3<<endl;
    return 0;
}