#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        double n,good,bad;
        cin>>n>>good>>bad;        
        if(ceil(n/2)<=good) cout<<(lli)n;
        else
        {
            int store=(ceil(n/2)/good);
            int temp=ceil(n/2);
            lli dujo=(ceil(ceil(n/2)/good)-1)*bad;
            lli count=store*good + temp%(int)good + dujo;
            cout<<max(count,(lli)n);
        }
        cout<<endl;
    }
    return 0;
}