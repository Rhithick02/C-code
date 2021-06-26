class Solution {
public:
    int unmatches(string s,int index){
        int un[]={0,0};
        for(int i=0;i<s.size();i++){
            if((s[i]-'0')!=index){
                un[s[i]-'0']++;
            }
            index^=1;
        }
        return (un[0]!=un[1])?INT_MAX:un[0];
    }
    int minSwaps(string s) {
        int ans=min(unmatches(s,0),unmatches(s,1));
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }

};