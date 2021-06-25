class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string s[3];
        for(int i = 0; i < firstWord.length(); i++) {
            s[0] += firstWord[i] - 49;
        }
        for(int i = 0; i < secondWord.length(); i++) {
            s[1] += secondWord[i] - 49;
        }
        for(int i = 0; i < targetWord.length(); i++) {
            s[2] += targetWord[i] - 49;
        }
        if(stoi(s[0]) + stoi(s[1]) == stoi(s[2])) {
            return true;
        } else {
            return false;
        }
    }
};