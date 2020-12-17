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
    int q,x,k=1,K=1;
    cin>>q;
    vi tleft(200001),tright(200001);
    char pos;
    while(q--)
    {
        cin>>pos>>x;
        if(pos=='L') tleft[x]=k++;
        else if(pos=='R') tright[x]=K++;
        else
        {
            int sizel,sizer;
            if(!tleft[x])
            sizel=k-1+tright[x]-1,sizer=K-1-tright[x];
            if(!tright[x])
            sizel=k-1-tleft[x],sizer=K-1+tleft[x]-1;
            cout<<max(0,min(sizel,sizer))<<endl;
        }
    }
    return 0;
}