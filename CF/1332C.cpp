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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ans=0;
        cin>>n>>k;
        string s;
        vector<vector<int>> ar((k+1)/2,vi(26));
        cin>>s;
        For(i,0,n/k)
        {
            int z=0;
            for(int j=i*k;j-i*k<=(k-1)/2;j++,z++)
            {
                ar[z][s[j]-'a']++;
                if(k*(i+1)-1-j+i*k!=j) ar[z][s[k*(i+1)-1-j+i*k]-'a']++;
            }
        }
        For(i,0,(k+1)/2)
        {
            int count=0,maxi=0;
            For(j,0,26) count+=ar[i][j];
            maxi=*max_element(asc(ar[i]));
            ans+=count-maxi;
        }
        cout<<ans<<endl;
    }
    return 0;
}