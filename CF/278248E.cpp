#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    For(i,n) cin>>b[i];
    int big=b[0];
    For(i,n)
    {
        if(i==0)
            a[i]=b[i];
        else
        {
            a[i]=b[i]+big;
            if(a[i]>big)
                big=a[i];
        }
    }
    For(i,n) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}