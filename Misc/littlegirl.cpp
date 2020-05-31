#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int count=0,odd=0;
    int ar[26]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
        ar[s[i]-'a']++;
    for(int i=0;i<26;i++)
    {
        if(ar[i]%2!=0)
            odd++;
    }
    if(odd==0)
        cout<<"First";
    else if(odd%2==0)
        cout<<"Second";
    else
        cout<<"First";
    cout<<endl;
    return 0;
}