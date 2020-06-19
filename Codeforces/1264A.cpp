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
        lli sum=0;
        int n,g=0,s=0,b=0,r,i=0;
        cin>>n;
        vi ar(n),st;
        For(i,0,n) cin>>ar[i];
        st.pb(1);
        For(i,0,n-1)
        {
            r=st.size();
            if(ar[i]==ar[i+1]) st[r-1]++;
            else st.pb(1);
        }
        while(sum+st[i]<=n/2) sum+=st[i++];
        sum-=st[i--];
        if(i<2 || n<6) 
        {
            cout<<0<<" "<<0<<" "<<0<<endl;
            continue;
        }
        g=st[0];
        int j=1;
        while(s<=g) s+=st[j++];
        while(j<=i) b+=st[j++];
        if(g<s && g<b) cout<<g<<" "<<s<<" "<<b<<endl;
        else cout<<0<<" "<<0<<" "<<0<<endl;
    }
    return 0;
}