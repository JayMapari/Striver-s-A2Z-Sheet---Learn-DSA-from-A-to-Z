#include<bits/stdc++.h>
using namespace std;


string reverseWords(string s) {
    string part;
    string ans;
    for(int i = s.length() - 1; i >= 0; i--) {
        if(s[i] == ' ') {
            continue;
        }
        part += s[i];
        if(i == 0||s[i - 1]==' ') {
            reverse(part.begin(), part.end());
            if(!ans.empty()) ans += ' ';
            ans += part;
            part.clear();
        }
    }

    return ans;
}

int main(){
    string s = "the sky is blue";
    cout << reverseWords(s);
    return 0;
}
