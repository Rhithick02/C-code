#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int c,m,x;
        cin>>c>>m>>x;
        cout<<min(min(c,m),(c+m+x)/3)<<endl;
    }
    return 0;
}