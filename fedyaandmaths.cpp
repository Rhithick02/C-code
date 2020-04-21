#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    string s;
    cin>>s;
    if((s[s.size()-1]+ 10*s[s.size()-2])%4==0)
        cout<<"4";
    else 
        cout<<"0";
    return 0;
}