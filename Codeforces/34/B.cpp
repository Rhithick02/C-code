#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int m,n,sum=0;
    cin>>m>>n;
    vi ar(m);
    For(i,m) cin>>ar[i];
    sort(ar.begin(),ar.end());
    For(i,n)
    {
        if(m>0 && ar[i]<0)
        {
            sum+=ar[i];
            m--;
        }
        else 
            break;
    }
    cout<<abs(sum)<<endl;
    return 0;
}