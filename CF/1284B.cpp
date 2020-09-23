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
    lli n;
    cin>>n;
    vi maxi,mini;
    For(i,n)
    {
        int l,mi=1e9,flag=0;
        cin>>l;
        vi ar(l);
        For(j,l)
        {
            cin>>ar[j];
            if(ar[j]<=mi) mi=ar[j];
            else flag=1;
        }
        if(!flag)
        {
            maxi.pb(*max_element(asc(ar)));
            mini.pb(*min_element(asc(ar)));
        }
    }
    lli count=0;
    lli size=maxi.size();
    sort(asc(maxi));
    sort(asc(mini));
    For(i,size)
        count+=size-(upper_bound(asc(maxi),mini[i])-maxi.begin());
    cout<<n*n-(size*size-count)<<endl;
    return 0;
}