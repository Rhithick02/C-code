#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    lli count=0;
    string st1,st2,st3;
    cin>>st1>>st2;
    if(st1[0]!=st2[0])
    {
        count+=abs(st2[0]-st1[0])-1;
    }
    cout<<count<<endl;
    if(st1[1]!=st2[1])
    {
        count+=abs(st2[1]-st1[1]);
    }
    cout<<count;
    return 0;
}