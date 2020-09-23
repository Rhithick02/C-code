#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define pa pair<int,int>
#define pal pair<long long,long long>
#define vpa vector<pair<int,int>>
#define vpal vector<pair<long long,long long>>
#define fi first
#define se second

int main() {
    ios::sync_with_stdio(false);
    int maxi[2]={ 0 }, mini[2]={ 100000, 100000 }, tot=1;
    vpa a(3);
    For(i, 0, 3) {
        cin>>a[i].fi>>a[i].se;
        maxi[0]=max(a[i].fi, maxi[0]);
        maxi[1]=max(a[i].se, maxi[1]);
        mini[0]=min(a[i].fi, mini[0]);
        mini[1]=min(a[i].se, mini[1]);
    }
    tot += maxi[0]-mini[0] + maxi[1]-mini[1];
    cout<<tot<<"\n";
    sort(asc(a));
    int x=a[0].fi, y=a[0].se;
    cout<<x<<" "<<y<<"\n";
    For(i, 0, a[1].fi-a[0].fi) cout<<++x<<" "<<y<<"\n"; // Moving from A to B in ->
    if (a[1].se>=a[0].se){
        For(i, 0, a[1].se-a[0].se) // Moving from A to B in ^
            cout<<x<<" "<<++y<<"\n";
        if(a[2].se>=a[1].se) // Moving from B to C in ^
            For(i, 0, a[2].se-a[1].se)
                cout<<x<<" "<<++y<<"\n";
        else{
            y = max(a[2].se,a[0].se);
            if (y == a[0].se){
                For(i, 0, a[0].se-a[2].se) // Moving from B to C in down
                    cout<<x<<" "<<--y<<"\n";
            }
        }
    }
    else{
        For(i, 0, a[0].se-a[1].se) // Moving from A to B in down
            cout<<x<<" "<<--y<<"\n";
        if (a[2].se <= a[1].se) // Moving from B to C in down
            For(i, 0, a[1].se-a[2].se)
                cout<<x<<" "<<--y<<"\n";
        else{
            y = min(a[2].se, a[0].se); // Moving from B to C in ^
            if(y == a[0].se){
                For(i, 0, a[2].se-a[0].se)
                    cout<<x<<" "<<++y<<"\n";
            }
        } 
    }
    For(i, 0, a[2].fi-a[1].fi) // Moving from B to C in ->
        cout<<++x<<" "<<y<<"\n";
}