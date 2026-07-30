#include<bits/stdc++.h>
using namespace std;



string minWindow(string s, string t) {
    int n = s.length();
    int m = t.length();
    int counter[256] = {0};
    int left = 0;
    int minlen =  INT_MAX;
    int len = -1;
    int cnt = 0;
    for(auto x : t){
        counter[x]++;
    }

    for(int right = 0;right < n;right++){
        counter[s[right]]--;
        if(counter[s[right]] >= 0){
            cnt++;
        }

        while(cnt == m){
            if(right-left+1 < minlen){
                minlen = right-left+1;
                len = left;
            }

            counter[s[left]]++;
            if(counter[s[left]] > 0){
                cnt--;
            }
            left++;

        }
    }
    return len == -1 ? "" : s.substr(len, minlen);
}


int main(){
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout << minWindow(s,t);
    return 0;
}