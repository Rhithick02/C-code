#include<bits/stdc++.h>
using namespace std;
long long online(long d,long oc,long of,long od)
{
    if(d<=of)
        return oc;
    else
    {
        return (oc+(d-of)*od);
    }        
}
long int classic(long long d,long long cs, long long cb, long long cm, long long cd)
{
    return (cb+(d/cs)*cm+d*cd);
}
int main()
{
    long long d,oc,of,od,cs,cb,cm,cd,camt,oamt;
    cin>>d;
    cin>>oc>>of>>od;
    cin>>cs>>cb>>cm>>cd;
    camt=classic(d,cs,cb,cm,cd);
    oamt=online(d,oc,of,od);
    if(camt>=oamt)
        cout<<"Online Taxi";
    else
        cout<<"Classic Taxi";
    return 0;        
}