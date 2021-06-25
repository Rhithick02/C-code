class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        int n = servers.size(), m = tasks.size(), t = 0, i = 0;
        multiset <pair <int, int>> free;
        multiset <pair <int, pair <int, int>>> busy;
        queue <int> q;
        vector <int> ans;
        
        for(int i = 0; i < n; i++) {
            free.insert({servers[i], i});
        }
        
        q.push(tasks[i]);
        while(!q.empty()) {
            if(free.size()) {
                auto it = free.begin();
                busy.insert({t + q.front(), *it});
                ans.push_back((*it).second);
                free.erase(it);
                q.pop();
                if(i + 1 < m) {
                    i++, t++;
                    q.push(tasks[i]);
                    while(busy.size() && (*busy.begin()).first == t) {
                        free.insert((*busy.begin()).second);
                        busy.erase(busy.begin());
                    }
                }
            } else {
                int next = (*busy.begin()).first;
                while(busy.size() && (*busy.begin()).first == next) {
                    free.insert((*busy.begin()).second);
                    busy.erase(busy.begin());
                }
                for(i = t + 1; i <= min(m-1, next); i++)
                    q.push(tasks[i]);
                t = next;
            }
        }
        return ans;
    }
};