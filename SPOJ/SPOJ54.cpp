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
    int t=10;
    while(t--)
    {
        int carry=0,size;
        string tot,temp,kla="";
        cin>>tot>>temp;
        string ans(tot.length(),' ');
        For(i,tot.length()-temp.length()) kla+='0';
        For(i,temp.length()) kla+=temp[i];
        size=tot.length();
        For(i,size)
        {
            int a=tot[size-i-1]-kla[size-i-1];
            ans[size-i-1]=(a>=0? a+'0':10+a+'0');
            if(a<0) tot[size-i-2]--;
        }
        int flag=0;
        For(i,size)
        {
            int a=ans[i]-'0';
            int b=(flag==1? a/2+5:a/2);
            ans[i]=b+'0';
            if(a%2) flag=1;
            else flag=0;
        }
        temp=ans;
        For(i,size)
        {
            int a=ans[size-i-1]-'0'+kla[size-i-1]-'0';
            ans[size-i-1]=a%10+'0';
            if(a>9) ans[size-i-2]++;
        }
        flag=0;
        For(i,size)
        {
            if(ans[i]=='0' && !flag)  continue;
            flag=1;
            cout<<ans[i];
        }
        cout<<endl;
        flag=0;
        For(i,size)
        {
            if(temp[i]=='0' && !flag)  continue;
            flag=1;
            cout<<temp[i];
        }
        cout<<endl;
    }
    return 0;
}