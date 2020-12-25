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

bool sortbysec(const pa &a, const pa &b)
{
    return a.se < b.se;
}
int main(){
    int n,temp=1,count=0,val;
    cin>>n;
    vpa ar(n);
    vi st;
    For(i,n) cin>>ar[i].fi,ar[i].se=i;
    sort(asc(ar));
    For(i,n-1)
    {
        if(ar[i].fi==ar[i+1].fi) temp++;
        else 
        {
            count=max(count,temp);
            val=(max(count,temp)==temp? ar[i].fi:val);
            temp=1;
        }
    }
    count=max(count,temp);
    val=(max(count,temp)==temp? ar[n-1].fi:val);
    For(i,n) if(ar[i].fi==val) st.pb(ar[i].se);
    sort(asc(ar),sortbysec);
    cout<<n-count<<endl;
    temp=0;
    for(auto it:st)
    {
        for(int i=it-1;i>=temp;i--)
        {
            if(ar[i].fi<val) cout<<"1 ";
            else if(ar[i].fi>val) cout<<"2 ";
            cout<<i+1<<" "<<i+2<<endl;
        }
        temp=it+1;
    }
    for(int i=st[st.size()-1]+1;i<n;i++)
    {
        if(ar[i].fi<val) cout<<"1 ";
        else if(ar[i].fi>val) cout<<"2 ";
        cout<<i+1<<" "<<i<<endl;
    }
    return 0;
}