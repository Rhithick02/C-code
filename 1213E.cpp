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
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    string res="abc";
    vector<string> st;
    do
    {
        string cur;
        For(i,n) cur+=res;
        st.pb(cur);
        st.pb(string(n,res[0])+string(n,res[1])+string(n,res[2]));
    }while(next_permutation(res.begin(),res.end()));
    for(auto it: st)
    {
        if(it.find(s)==string::npos && it.find(t)==string::npos)
        {
            cout<<"YES\n"<<it<<endl;
            break;
        }
    }
    return 0;
}