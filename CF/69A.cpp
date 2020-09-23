#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int n,sumx=0,sumy=0,sumz=0;
    cin>>n;
    vector<int> x(n),y(n),z(n);
    For(i,n) 
    {
        cin>>x[i]>>y[i]>>z[i];
        sumx+=x[i];
        sumy+=y[i];
        sumz+=z[i];
    }
    if(!sumx && !sumy && !sumz)
        cout<<"YES";
    else 
        cout<<"NO";
    cout<<endl;
    return 0;
}