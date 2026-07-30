#include<bits/stdc++.h>
using namespace std;


bool checkKthBit(int n, int k) {
    return (n & (1 << k)) != 0;
}

int main(){
    int n = 4;
    int k = 0;
    cout << checkKthBit(n,k);
    return 0;
}
