#include <bits/stdc++.h>
using namespace std;

int earliestFinishTime(vector<int>& landStartTime,
                       vector<int>& landDuration,
                       vector<int>& waterStartTime,
                       vector<int>& waterDuration) {

    int n = landStartTime.size();
    int m = waterStartTime.size();

    int l_finish = INT_MAX;
    int w_finish = INT_MAX;

    int l_w = INT_MAX;
    int w_l = INT_MAX;

    // Earliest land finish
    for(int i = 0; i < n; i++) {
        l_finish = min(l_finish,
                       landStartTime[i] + landDuration[i]);
    }

    // Best Land -> Water using earliest land finish
    for(int i = 0; i < m; i++) {
        l_w = min(l_w,
                  max(waterStartTime[i], l_finish)
                  + waterDuration[i]);
    }

    // Earliest water finish
    for(int i = 0; i < m; i++) {
        w_finish = min(w_finish,
                       waterStartTime[i] + waterDuration[i]);
    }

    // Best Water -> Land using earliest water finish
    for(int i = 0; i < n; i++) {
        w_l = min(w_l,
                  max(landStartTime[i], w_finish)
                  + landDuration[i]);
    }

    return min(l_w, w_l);
}

int main() {
    vector<int> l = {2,8};
    vector<int> dl = {4,1};
    vector<int> w = {6};
    vector<int> wd = {3};

    cout << earliestFinishTime(l, dl, w, wd);
}