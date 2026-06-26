#include<bits/stdc++.h>
using namespace std;


int maxDepth(string s) {
    int ldepth = 0;
    int depth = 0;
    for(char c : s){
        if(c == '('){
            ldepth++;

        }
        if(c == ')'){
            ldepth--;
        }
        if(ldepth >= depth){
            depth = ldepth;
        }
    }
    
    return depth;
}

int main(){
    string str = "(1+(2*3)+((8)/4))+1";
    cout<<maxDepth(str);
    return 0;
}
