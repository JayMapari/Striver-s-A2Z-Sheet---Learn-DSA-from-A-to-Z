#include<bits/stdc++.h>
using namespace std;


    bool checkValidString(string s) {
        int depth1 = 0;
        int depth2 = 0;

        for (char c : s) {
            if (c == '(') {
                depth1++;
                depth2++;
            }
            else if (c == ')') {
                depth1--;
                depth2--;
            }
            else { 
                depth1--; 
                depth2++;  
            }

            if (depth1 < 0) {
                depth1 = 0;
            }

            if (depth2 < 0) {
                return false;
            }
        }

        return depth1 == 0;
    }

int main(){
    string s = "(*)";
    cout << checkValidString(s);
    return 0;
}
