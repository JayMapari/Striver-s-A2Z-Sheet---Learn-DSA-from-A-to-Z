#include<bits/stdc++.h>
using namespace std;


int lengthOfLongestSubstring(string s) {
    unordered_set<char>ump;
    int left = 0;
    int maxLen = 0;

    for (int right = 0; right < s.size(); right++) {
        while (ump.count(s[right])) {
            ump.erase(s[left]);
            left++;
        }

        ump.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}


int main(){
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);
    return 0;
}