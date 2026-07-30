#include <bits/stdc++.h>
using namespace std;


int largestPower(int n) {
    int x = 0;
    while ((1 << (x + 1)) <= n)
        x++;

    return x;
}

int countSetBits(int n) {
    if (n == 0)
        return 0;

    int x = largestPower(n);
    int b = x * (1 << (x - 1));
    int m = n - (1 << x) + 1;
    int remaining = n - (1 << x);
    return b + m + countSetBits(remaining);
}


int main(){
    int n = 4;
    cout << countSetBits(n);
    return 0;
}