#include<bits/stdc++.h>
using namespace std;


vector<string>result;

bool isValid(string s){
    int depth = 0;
    for(char c : s){
        if(c == '('){
            depth++;
        }
        else{
            depth--;
        }
        if(depth < 0){
            return false;
        }
    }
    return depth == 0;
}

void solve(string& s, int n,int open, int close){
    if(s.length() == 2*n){
        if(isValid(s)){
            result.push_back(s);
        }
        return;
    }

    if (open < n) {
        s.push_back('(');
        solve(s, n, open + 1, close);
        s.pop_back();
    }

    if (close < open) {
        s.push_back(')');
        solve(s, n, open, close + 1);
        s.pop_back();
    }
}


vector<string> generateParenthesis(int n) {
    string par = "";
    int open = 0;
    int close = 0;
    solve(par,n,open,close);
    return result;
}


int main(){
    int par = 4;
    vector<string>v =  generateParenthesis(par);
    for(auto x: v){
        cout << x << " ";
    }
    return 0;
}