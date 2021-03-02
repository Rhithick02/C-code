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
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int tot_books, tot_lib, tot_days, overall_score;
vector <pair<int, vector <int>>> answer;
set <int> assigned_books, assigned_libraries;

struct library {
    int n, scan_time, throughput, lib_score;
    vector <pair<int, int>> books;
};

void possible_books(vector <int> &ar, vector <pair<int, int>> books, int k) {
    int cnt = 0;
    for(auto it: books) {
        if(assigned_books.find(it.se) != assigned_books.end()) {
            continue;
        }
        if(cnt == k) {
            break;
        }
        ar.pb(it.se);
        cnt++;
    }
}
void score_calc(vector <float> &score_per_iter, int cur_time, library lib[], vector <int> books_score) {
    For(i, 0, tot_lib) {
        if(assigned_libraries.find(i) != assigned_libraries.end()) {
            score_per_iter.pb(-mod);
            continue;   
        }
        vector <int> pos_books;
        int k = max(0, min((tot_days - cur_time - lib[i].scan_time) * lib[i].throughput, lib[i].n));
        possible_books(pos_books, lib[i].books, k);
        int sum = 0;
        for(auto it: pos_books) {
            sum += books_score[it];
        }
        score_per_iter.pb(1.0 * sum / lib[i].scan_time);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin >> tot_books >> tot_lib >> tot_days;
    vector <int> books_score(tot_books);
    library lib[tot_lib];
    For(i, 0, tot_books) cin >> books_score[i];
    For(i, 0, tot_lib) {
        int t1, t2, t3, t4;
        cin >> t1 >> t2 >> t3;
        lib[i].n = t1, lib[i].scan_time = t2, lib[i].throughput = t3;
        For(j, 0, lib[i].n) {
            cin >> t4;
            lib[i].books.pb({books_score[t4], t4});
        }
        sort(des(lib[i].books));
    }
    int cur_time = 0;
    while(true) {
        vector <int> best_books;
        vector <float> scores_per_iter;
        score_calc(scores_per_iter, cur_time, lib, books_score);
        if(!scores_per_iter.size()) {
            break;
        }
        int max_score_lib = max_element(asc(scores_per_iter)) - scores_per_iter.begin();
        if(assigned_libraries.find(max_score_lib) != assigned_libraries.end()) {
            break;
        }
        int k = max(0, min((tot_days - cur_time - lib[max_score_lib].scan_time) * lib[max_score_lib].throughput, lib[max_score_lib].n));
        possible_books(best_books, lib[max_score_lib].books, k);
        for(auto it: best_books) {
            assigned_books.insert(it);
        }
        assigned_libraries.insert(max_score_lib);
        cur_time += lib[max_score_lib].scan_time;
        if(cur_time >= tot_days) {
            break;
        }
        answer.pb({max_score_lib, best_books});
    }
    for(auto it: answer) {
        cout << "Library: " << it.fi << "\n";
        for(auto ti: it.se) {
            cout << ti << " ";
        }
        cout << "\n";
    }
}