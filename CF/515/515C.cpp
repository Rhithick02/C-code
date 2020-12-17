#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vi ar;
    For(i,n)
    {
        if(s[i]=='4') 
        {
            ar.push_back(2);
            ar.push_back(2);
            ar.push_back(3);
        }
        else if(s[i]=='8')
        {
            ar.push_back(2);
            ar.push_back(2);
            ar.push_back(2);
            ar.push_back(7);
        }
        else if(s[i]=='6')
        {
            ar.push_back(3);
            ar.push_back(5);
        }
        else if(s[i]=='9')
        {
            ar.push_back(3);
            ar.push_back(3);
            ar.push_back(2);            
            ar.push_back(7);
        }
        else if(s[i]!='0' && s[i]!='1') ar.push_back(s[i]-48);
    }
    sort(ar.rbegin(),ar.rend());
    For(i,ar.size()) cout<<ar[i];
    return 0;
}