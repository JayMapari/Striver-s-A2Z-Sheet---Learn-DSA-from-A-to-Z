#include <bits/stdc++.h>
using namespace std;

int maxNumberOfBalloons(string text) {
    unordered_map<char,int>ump;
    for(int i = 0;i < text.length();i++){
        if(text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' || text[i] == 'n')
            ump[text[i]]++;
    }

    int cnt = 0;
    for (auto it = ump.begin(); it != ump.end(); it++) {
        if(it->first == 'b' || it->first == 'a' || it->first == 'n'){
            if(cnt != 0){
                if(it->second >= cnt){
                    continue;
                }
                else{
                    cnt = it->second;
                }
            }
            else{
                cnt = it->second;
            }
        }
        else{
            int c = it->second/2;
            if(cnt != 0){
                if(c >= cnt){
                    continue;
                }
                else{
                    cnt = c;
                }
            }
            else{
                cnt = c;
            }
        }
        if(cnt == 0){
            return 0;
        }
    }
    if(ump.count('b') && ump.count('a') && ump.count('l') && ump.count('o') && ump.count('n')){
        return cnt;
    }
    return 0;
}


int main(){
    string text = "nlaebolko";
    cout << maxNumberOfBalloons(text);
    return 0;
}