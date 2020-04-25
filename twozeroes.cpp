#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        float mo1,mo2,a,b;
        cin>>a>>b;
        mo1=(2*b-a)/3;
        mo2=(2*a-b)/3;
        if((mo1-int(mo1)==0 || mo2-int(mo2)==0) && mo1>=0 && mo2>=0)
            cout<<"yes\n";
        else 
            cout<<"no\n";
    }
    return 0;
}