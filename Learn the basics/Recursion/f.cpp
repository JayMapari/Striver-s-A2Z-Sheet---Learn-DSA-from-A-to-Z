#include <bits/stdc++.h>
using namespace std;

int rec(int fib){

    if(fib == 0){
        return 0;
    }
    if(fib == 1){
        return 1;
    }
    return rec(fib-1) + rec(fib-2);
}

int main(){
    int num = 5;
    cout << rec(num);
    return 0;
}