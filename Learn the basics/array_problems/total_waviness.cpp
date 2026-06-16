#include <bits/stdc++.h>
using namespace std;


int totalWaviness(int num1, int num2) {
    int wave = 0;
    string s1 = to_string(num1);
    string s2 = to_string(num2);

    if(s2.length() == 2){
        return 0;
    }
    for(int i = num1; i <= num2;i++){
        s1 = to_string(i);
        if(i >= 100){
            for(int j = 1; j < s2.length()-1;j++){
                if(int(s1[j]) > int(s1[j-1]) && int(s1[j]) > int(s1[j+1]) || (int(s1[j]) < int(s1[j-1]) && int(s1[j]) < int(s1[j+1]))){
                    wave++;
                }
            }
        }
    }
    return wave;
}



int main(){
    int one = 120;
    int two = 130;
    cout << totalWaviness(one,two);
    return 0;
}