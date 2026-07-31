#include<bits/stdc++.h>
using namespace std;


int minBitFlips(int start, int goal) {
    int x = start ^ goal;
    int count = 0;

    while (x) {
        count += (x & 1);
        x >>= 1;
    }

    return count;
}



int main(){
    int start = 10;
    int goal = 7;

    cout << minBitFlips(start, goal);
    return 0;
}