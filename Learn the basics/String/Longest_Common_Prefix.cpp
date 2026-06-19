#include<bits/stdc++.h>
using namespace std;


string longestCommonPrefix(vector<string>& strs) {
    string part = strs[0];
    for(int i = 1; i < strs.size(); i++) {
        int j = 0;
        while(j < part.size() && j < strs[i].size() && part[j] == strs[i][j]) {
            j++;
        }
        part = part.substr(0, j);
        if(part.empty()) return "";
    }
    return part;
}


int main(){
    vector<string>v = {"flower","flow","flight"};
    cout<<longestCommonPrefix(v);
    return 0;
}