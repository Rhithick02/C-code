#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        double h,c,t;
        cin>>h>>c>>t;
        int temp=ceil((h-t)/(2*t-h-c));
        double tans=(temp*(h+c)+h)/(2*temp+1);
        if(temp<0 || abs(tans-t)>=abs(t-(h+c)/2.0)) 
            cout<<2;
        else
        {
            while(abs(t-((temp-1)*(h+c)+h)/(2*temp-1))<=abs(t-tans))
            temp--;
            cout<<2*temp+1;
        }
        cout<<endl;
    }
    return 0;
}