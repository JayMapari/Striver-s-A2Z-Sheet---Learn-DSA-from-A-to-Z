#include<bits/stdc++.h>
using namespace std;


bool solve(string &s,int i, int j){
    if(i >= j){
        return true;
    }
    if(s[i] == s[j]){
        return solve(s,i+1,j-1);
    }
    return false;
}

string longestPalindrome(string s) {
    int n = s.length();
    int maxlen = 1;
    int first = 0;
    for(int i = 0;i < n;i++){
        for(int j = i; j < n;j++){
            if(solve(s,i,j)){
                if(j-i+1>maxlen){
                    maxlen = j-i+1;
                    first = i;
                }
            }
        }
    }
    return s.substr(first,maxlen);
}

int main(){
    string s = "babad";
    cout << longestPalindrome(s);
    return 0;
}


