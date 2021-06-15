class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        set <int> possible;
        for(int i = 0; i < triplets.size(); i++) {
            possible.insert(i);
        }
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < triplets.size(); j++) {
                if(target[i] < triplets[j][i]) {
                    possible.erase(j);
                }
            }
        }
        bool ok[3] = {false, false, false};
        for(auto it: possible) {
            for(int i = 0; i < 3; i++) {
                if(triplets[it][i] == target[i]) {
                    ok[i] = true;
                }
            }
        }
        return ok[0] & ok[1] & ok[2];
    }
};