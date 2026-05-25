#include <bits/stdc++.h>
using namespace std;

void rec(string s,int t){
    cout << s << endl;
    if(t == 0){
        return;
    }
    rec(s,t-1);
}

int main(){
    string s;
    cin >> s;
    int times = 5;
    rec(s,times);
    return 0;
}