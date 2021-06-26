class Solution {
public:
    int numberOfRounds(string startTime, string finishTime) {
        if(startTime > finishTime) {
            if(finishTime[1] < '6') {
                finishTime[1] += 4;
            } else {
                finishTime[1] = (finishTime[1]-'0'+4)%10 + '0';
                finishTime[0] += 1;
            }
            finishTime[0] += 2;
        }
        cout << startTime << endl << finishTime << endl;
        while(!check(startTime)) {
            if(startTime[4] != '9') {
                startTime[4] += 1;
            } else {
                startTime[4] = '0';
                if(startTime[3] != '5') {
                    startTime[3] += 1;
                } else {
                    startTime[3] = '0';
                    if(startTime[1] != '9') {
                        startTime[1] += 1;
                    } else {
                        startTime[1] = '0';
                        startTime[0] += 1;
                    }
                }
            }
        }
        cout << startTime;
        int start = (startTime[0]-'0') * 10 + startTime[1]-'0';
        start *= 60;
        start += (startTime[3]-'0') * 10 + startTime[4]-'0';
        int end = (finishTime[0]-'0') * 10 + finishTime[1]-'0';
        end *= 60;
        end += (finishTime[3]-'0') * 10 + finishTime[4]-'0';
        return (end - start) / 15;
    }
    bool check(string s) {
        bool ok = false;
        if(((s[3] == '0' || s[3] == '3') && s[4] == '0') || (s[4] == '5' && (s[3] == '1' || s[3] == '4') ))
            ok = true;
        return ok;
    }
};