#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define INF 2000000007
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

struct street {
    int start, end, time;
    bool crossed;
    string name;
};

struct car_details {
    int siz;
    float time_sum;
    vector <string> street;
};

bool sortbytime(car_details a, car_details b) {
    return a.time_sum < b.time_sum;
}
int main() {
    ios::sync_with_stdio(false);
    int D, I, S, V, F, cnt = 0;
    cin >> D >> I >> S >> V >> F;
    map <string, int> mp;
    street ar[S];
    car_details car[V];
    For(i, 0, S) {
        cin >> ar[i].start >> ar[i].end >> ar[i].name >> ar[i].time;
        mp[ar[i].name] = cnt++;
    }
    For(i, 0, V) {
        cin >> car[i].siz;
        string te;
        car[i].time_sum = 0;
        For(j, 0, car[i].siz) {
            cin >> te;
            car[i].street.pb(te);
            car[i].time_sum += ar[mp[te]].time;
        }
        if(car[i].time_sum > D) {
            car[i].time_sum = INF;
        }
        car[i].time_sum = 1.0 * car[i].time_sum / car[i].siz;
    }
    sort(car, car + V, sortbytime);
    cout << car[0].siz << "\n";
    For(i, 0, car[0].siz) {
        cout << ar[mp[car[0].street[i]]].end << "\n";
        cout << "1\n";
        cout << car[0].street[i] << " " << D << "\n";
    }
}