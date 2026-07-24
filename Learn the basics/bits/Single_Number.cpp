#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;
    }
    return result;
}

int main(){
    vector<int>ans = {2,2,1};
    cout << singleNumber(ans);
    return 0;
}
