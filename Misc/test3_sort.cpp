#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={1,5,16,34,21,70};
    sort(a.begin(),a.end(),[](int a,int b)
    {
        if(a==1)
        return false;
        if(b==1)
        return true;
        return a<b;             
    });
    for(int i=0;i<a.size();i++)
    cout<<a[i]<<endl;
    return 0;
}           