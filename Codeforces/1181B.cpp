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
    ios::sync_with_stdio(false);
    int n,fl=0,carry=0;
    string s,s1="",s2="";
    cin>>n>>s;
    if(s[(n-1)/2=='0']) goto a;
    For(i,0,(n-1)/2){
        if(s[i]==s[i+(n-1)/2]) continue;
        else if(s[i]>s[i+(n-1)/2]) fl=1;
        break;
    }
    a:if(fl)
    {
        For(i,0,(n-1)/2) s1+=s[i];
        For(i,(n-1)/2,n)s2+=s[i];
        cout<<s1<<" "<<s2;
        char ans[s2.length()+1];
        For(i,0,s1.length()){
            char a=s2[s2.length()-1-i],b=s1[s1.length()-1-i];
            ans[s2.length()-i]=(a+b-'0'-'0'+carry)%10+'0';
            carry=(a+b-'0'-'0'+carry)/10;
        }
        if(n&1){
            ans[1]=(s1[0]-'0'+carry)%10+'0';
            carry=(s1[0]-'0'+carry)/10;
            ans[0]=carry+'0';
        }
        for(int i=0;i<s2.length()+1;i++)
        {
            if(!i && (ans[i]=='0' || n%2==0)) continue;
            else cout<<ans[i];
        }
    }
    else
    {
        For(i,0,(n+1)/2) s1+=s[i];
        For(i,(n+1)/2,n)s2+=s[i];
        char ans[s1.length()+1];
        For(i,0,s2.length()){
            char a=s2[s2.length()-1-i],b=s1[s1.length()-1-i];
            ans[s1.length()-i]=(a+b-'0'-'0'+carry)%10+'0';
            carry=(a+b-'0'-'0'+carry)/10;
        }
        if(n&1){
            ans[1]=(s1[0]-'0'+carry)%10+'0';
            carry=(s1[0]-'0'+carry)/10;
            ans[0]=carry+'0';
        }
        for(int i=0;i<s1.length()+1;i++)
        {
            if(!i && (ans[i]=='0' || n%2==0)) continue;
            else cout<<ans[i];
        }
    }
    cout<<endl;
    return 0;
}