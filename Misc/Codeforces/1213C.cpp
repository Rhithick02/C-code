#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int q;
    cin>>q;
    while(q--)
    {
        lli n,m;
        cin>>n>>m;
        int store=0;
        for(int i=1;i<=10;i++) store+=(i*m)%10;
        lli times=((n/10)/m)*store;
        int temp=n/m - ((n/10)/m)*10;
        for(int i=1;i<=temp;i++) times+=(i*m)%10;
        cout<<times<<endl;
    }
    return 0;
}