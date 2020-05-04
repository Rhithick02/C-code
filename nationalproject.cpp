#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,g,b,half;
        lli count=0;
        cin>>n>>g>>b;
        if(g>=n)
        {
            cout<<n<<endl;
            continue;
        }
        if(n%2==0)
            half=n/2;
        else 
            half=n/2+1;
        while(half>g)
        {
            count+=g+b;
            half-=g;
        }
        count+=half;
        cout<<count<<endl;
    }
    return 0;
}