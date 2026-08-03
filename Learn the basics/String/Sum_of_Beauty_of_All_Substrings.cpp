#include<bits/stdc++.h>
using namespace std;


int beautySum(string s) {
    int n = s.size();
    int ans = 0;
    for(int i = 0; i < n; i++) {
        unordered_map<char,int> ump;
        for(int j = i; j < n; j++) {
            ump[s[j]]++;
            int maxfreq = INT_MIN;
            int minfreq = INT_MAX;
            for(auto x : ump) {
                maxfreq = max(maxfreq, x.second);
                minfreq = min(minfreq, x.second);
            }
            ans += (maxfreq - minfreq);
        }
    }
    return ans;
}


int main(){
    string str = "aabcb";
    cout << beautySum(str);
    return 0;
}
