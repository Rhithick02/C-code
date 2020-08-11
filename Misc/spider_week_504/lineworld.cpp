#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int k,t;
    cin>>k>>t;
    vector<int>ar(k);
    for(int i=1;i<k;i++)
        cin>>ar[i];
    for(int j=1;j<k;)
    {
        j=j+ar[j];
        if(j==t)
        {
            cout<<"YES";
            t=0;
            break;
        }
    }
    if(t!=0)
        cout<<"NO";
    return 0;
}