#include <bits/stdc++.h>
using namespace std;

void rec(int n){
    if(n == 0){
        return;
    }
    rec(n-1);
    cout << n <<endl;
}

int main(){
    int num;
    cout << "Enter the number :";
    cin >> num;
    rec(num);
    return 0;
}