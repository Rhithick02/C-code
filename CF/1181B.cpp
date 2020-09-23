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

string ans(1e5+1, '9');

void func(string a, string b){
    int carry=0,i=0;
    if(a.length()<b.length()) swap(a,b);
    string te(1e5+1,'0');
    reverse(asc(a)), reverse(asc(b));
    For(i, 0, a.size()) te[i]=a[i];
    while(i<b.size() || carry) {
        te[i]+= (i<b.size()?b[i]-'0':0)+carry;
        if(te[i]>'9') te[i]-=10, carry=1;
        else carry=0;
        i++;
    }
    reverse(asc(te));
    if(te<ans) ans=te;
}

int main(){
    ios::sync_with_stdio(false);
    int n;
    string s;
    cin>>n>>s;
    int l=n/2, r=n/2, i=0;
    while(l>0 && s[l]=='0')l--;
    l-=3;
    while(r<n-1 && s[r]=='0')r++;
    r+=3;
    For(i, l, r+1) if(i>0 && i<n && s[i]!='0') func(s.substr(0, i), s.substr(i, n-i));
    while(ans[i]=='0') i++;
    cout<<ans.substr(i)<<endl;
}
