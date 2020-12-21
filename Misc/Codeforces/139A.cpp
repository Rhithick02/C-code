#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n,sum=0;
    cin>>n;
    vector<int> ar(7);
    for(int i=0;i<7;i++)
        cin>>ar[i];
    for(int j=1;j<=7;j++)
    {
        sum+=ar[j-1];
        if(sum>n)
        {
            cout<<j;
            break;
        }
        else if(j==7)
            j=0;
    }
    return 0;
}