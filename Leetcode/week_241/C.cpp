class FindSumPairs {
    vector <int> ar1, ar2;
    map <int, int> hash;
public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        for(int i = 0; i < nums1.size(); i++) {
            ar1.push_back(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++) {
            ar2.push_back(nums2[i]);
            hash[ar2[i]]++;
        }
    }
    
    void add(int index, int val) {
        hash[ar2[index]]--;
        ar2[index] += val;
        hash[ar2[index]]++;
    }
    
    int count(int tot) {
        int cnt = 0;
        for(int i = 0; i < ar1.size(); i++) {
            if(hash[tot - ar1[i]]) {
                cnt += hash[tot-ar1[i]];
            }
        }
        return cnt;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */