#include <bits/stdc++.h>
using namespace std;

int main(){
    int num = 1;
    string s = to_string(num);
    int len = s.length();
    cout << len << endl;
    int ans = 0;
    int i = num;
    while(i != 0){
        int power = round(pow(i%10,len));
        ans = ans + power;
        i /= 10;
    }
    cout<<ans;
}