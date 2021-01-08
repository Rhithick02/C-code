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
    int n,flag=0;
    cin>>n;
    vi ar(n);
    For(i,n) cin>>ar[i];
    For(i,n-1)
    {
        if((ar[i]==2 && ar[i+1]==3) || (ar[i]==3 && ar[i+1]==2))
        {
            flag=-1;
            break;
        }
    }
    if(flag==-1) cout<<"Infinite"<<endl;
    else
    {
        cout<<"Finite\n";
        int count=0;
        for(int i=1;i<n;i++)
        {
            if(ar[i-1]==2) count+=3;
            else if(ar[i-1]==3) count+=4;
            if(ar[i-1]==1)
            {
                if(ar[i]==2) count+=3;
                else count+=4;
            }
        }
        for(int i=2;i<n;i++)
            if(ar[i]==2 && ar[i-1]==1 && ar[i-2]==3) count--;
        cout<<count<<endl;
    }
    return 0;
}