#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n;
    cin>>n;
    vector<int> ar(n+1);
    ar[3]=6;
    for(int i=4;i<=n;i++)
    {
        ar[i]=ar[i-1]+i*(i-1);
    }
    cout<<ar[n];
    return 0;
}