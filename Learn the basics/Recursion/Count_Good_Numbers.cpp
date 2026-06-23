#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
int ans(int x, long long n){
    if(n == 0) return 1;
    long long half = ans(x,n/2);

    if(n % 2 == 0){
        return (half*half) % mod;
    }
    return (x*half*half)%mod;
}

int countGoodNumbers(long long n) {
    long long even = ans (5 , (n+1)/2);
    long long odd = ans(4 , n/2);
    return (even*odd)%mod;
}


int main(){
    int n = 50;
    cout << countGoodNumbers(n);
    return 0;
}