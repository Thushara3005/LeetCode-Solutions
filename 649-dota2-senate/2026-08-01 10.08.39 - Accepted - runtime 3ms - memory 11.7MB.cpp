class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> E;
    queue<int> F;

    int n = senate.size();

    for (int i = 0; i < n; i++) {
        if (senate[i] == 'R')
            E.push(i);
        else
            F.push(i);
    }

    while (!E.empty() && !F.empty()) {

        int e = E.front();
        E.pop();

        int f = F.front();
        F.pop();

        if (e < f) {
            // E gets the turn first
            E.push(e + n);
        }
        else {
            // F gets the turn first
            F.push(f + n);
        }
    }

    if (!E.empty())
        return "Radiant";

    return "Dire";
    }
};