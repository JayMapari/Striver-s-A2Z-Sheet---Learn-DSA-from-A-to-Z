#include<bits/stdc++.h>
using namespace std;


int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

    long long dvd = llabs((long long)dividend);
    long long dvs = llabs((long long)divisor);
    long long ans = 0;
    while (dvd >= dvs) {
        int shift = 0;
        while (dvd >= (dvs << (shift + 1))) {
            shift++;
        }

        ans += (1LL << shift);
        dvd -= (dvs << shift);
    }
    if ((dividend < 0) ^ (divisor < 0))
        ans = -ans;
    return (int)ans;
}


int main(){
    int dividend = 10;
    int divisor = 3;
    cout << divide(dividend,divisor);
    return 0;
}