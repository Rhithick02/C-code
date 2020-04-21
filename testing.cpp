#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <int> ar;
    set <int>::iterator i;
    ar.insert(30);
    ar.insert(16);
    ar.insert(45);
    ar.insert(30);
    ar.erase(ar.begin());//ar.erase(16)
    for(i=ar.begin();i!=ar.end();i++)
    {
        cout<<*i<< " ";
    }
    return 0;
}