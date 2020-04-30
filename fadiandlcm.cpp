#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    lli x,temp;
    vector<lli> ar;
    cin>>x;
    for(int i=1;i<=sqrt(x);i++)
    {
        if(x%i==0)
            ar.push_back(i);
    }
    for(int i=ar.size()-1;i>=0;i--)
    {
        temp=x/ar[i];
        if((temp*ar[i])/__gcd(temp,ar[i])==x)
        {
            cout<<ar[i]<<" "<<temp;
            break;
        }
    }
    cout<<endl;
    return 0;
}