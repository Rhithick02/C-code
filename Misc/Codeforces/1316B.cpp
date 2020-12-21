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
        int n;
        cin>>n;
        vector<pair<string,int>> ar;
        string s;
        cin>>s;
        for(int i=1;i<=n;i++)
        {
            string te="";
            for(int j=i-1;j<n;j++)
                te+=s[j];
            if((n%2!=0 && i%2!=0) || (n%2==0 && i%2==0))
            {
                for(int j=i-2;j>=0;j--)
                te+=s[j];
            }
            else
            {
                for(int j=0;j<=i-2;j++)
                te+=s[j];
            }
            ar.pb({te,i});
        }
        sort(asc(ar));
        cout<<ar[0].fi<<endl<<ar[0].se<<endl;
    }
    return 0;
}