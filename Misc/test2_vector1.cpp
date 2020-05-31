#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(5);
    for(int i=0;i<a.size();i++)
    cin>>a[i];
    int test;
    cin>>test;
    a.push_back(test);
    for(int i=0;i<a.size();i++)
    cout<<a[i]<<endl;
    return 0;
}