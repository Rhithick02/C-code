#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> list(t);
    for(int i=0;i<t;i++)
    cin>>list[i];
    sort(list.begin(),list.end());
    cout<<endl;
    for(int i=0;i<t;i++)
    cout<<list[i]<<endl;
    return 0;
}