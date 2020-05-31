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
    string sum="000000000000000000";
    vector<string> st;
    set<lli> te,rte;
    lli x;
    int t;
    cin>>t;
    while(t--)
    {
        int q;
        string s;
        cin>>q;
        if(q==1)
        {
            cin>>s;
            For(i,18)
                s[i]=;
            te.insert(x-temp);
            rte.insert(temp-x);
        }
        else if(q==2)
        {
            cin>>s;
            For(i,18) sum[i]=(sum[i]+s[i]-96)%10 + 48;
        }
        else if(q==3)
        {
            cin>>s;
            lli temp=0;
            For(i,18)
                temp=temp*10+(s[i]-sum[i]+10)%10;
            if(te.find(temp)!=te.end()) cout<<"YES";
            else cout<<"NO"; 
            cout<<endl;
        }
        else
        {
            lli temp=0;
            For(i,18)
                temp=temp*10 + (9-sum[i]+48);
            if(rte.lower_bound(-temp)!=rte.end()) 
            {
                lli st=-1*(*rte.lower_bound(-temp));
                for(int i=17;i>=0;i--)
                {
                    lli po=st/(lli)pow(10,i);
                    cout<<(po+sum[18-i-1]-48)%10;
                }
            }
            else cout<<*te.rbegin();
            cout<<endl;
        }
    }
    return 0;
}