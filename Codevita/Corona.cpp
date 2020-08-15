// #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    ios::sync_with_stdio(false);
    int x = 0, y = 0, dx = 1, dy = 1, cnt = 0;
    int inf = 0, safe = 0;
    vector <string> ar(9);
    string s;
    For(i, 0, 9){
        cin >> s;
        For(j, 0, 20) 
            if(s[j] == 'c' || s[j] == 'a')
                safe++;
        ar[i] = s;
    }
    cout << x << " " << y << "\n";
    x++, y++;
    while(cnt < 2){
        if(ar[8-y][x] == 'a'){
            ar[8-y][x] = '-';
            if(dx > 0 && dy > 0) dx = -1;
            else if(dx < 0 && dy > 0) dy = -1;
            else if(dx < 0 && dy < 0) dx = 1;
            else dy = 1;
        }
        else if(ar[8-y][x] == 'c'){
            ar[8-y][x] = '-';
            if(dx > 0 && dy > 0) dy = -1;
            else if(dx < 0 && dy > 0) dx = 1;
            else if(dx < 0 && dy < 0) dy = 1;
            else dx = -1;
        }
        else if(ar[8-y][x] == '*'){
            cnt++;
            if(dx > 0 && dy > 0){
                if(x == 19) dx = -1;
                else dy = -1;
            }
            else if(dx < 0 && dy > 0){
                if(!x) dx = 1;
                else dy = -1;
            }
            else if(dx < 0 && dy < 0){
                if(!x) dx = 1;
                else dy = 1;
            }
            else{
                if(x == 19) dx = -1;
                else dy = 1;
            }
        }
        cout << x << " " << y << endl;
        x += dx, y += dy;
    }
    For(i, 0, 9){
        For(j, 0, 20){
            if(ar[i][j] == '*')
                continue;
            if(ar[i][j] == '-')
                inf++, safe--;
        }
        cout<<ar[i]<<"\n";
    }
    cout << "safe=" << safe<<"\n";
    cout << "infected=" << inf <<"\n";
}