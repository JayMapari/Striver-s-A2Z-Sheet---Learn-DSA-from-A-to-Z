#include<bits/stdc++.h>
using namespace std;


void solve(int index, string& s, vector<vector<string>>& result, vector<string>& current) {
if(index == s.length()) {
    result.push_back(current);
    return;
}
for(int i = index + 1; i <= s.length(); i++) {
    string sub = s.substr(index, i - index);
    string r = sub;
    reverse(r.begin(),r.end());
    if(sub == r) {                   
        current.push_back(sub);
        solve(i, s, result, current);
        current.pop_back();
    }
}
}
vector<vector<string>> partition(string s) {
    vector<vector<string>>result;
    vector<string>v;
    solve(0,s,result,v);
    return result;
}

int main(){
    string s = "aab";
    vector<vector<string>>v = partition(s);
    for(auto row : v){
        for(auto it : row){
            cout << it << " ";
        }
    }
    return 0;
}
