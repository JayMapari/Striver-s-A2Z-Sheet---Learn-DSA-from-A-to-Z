#include <bits/stdc++.h>
using namespace std;

vector<int> twoOddNum(vector<int>& nums) {
    int n = nums.size();
    int x = 0;

    for (int i = 0; i < n; i++) {
        x ^= nums[i];
    }

    int rightmost = (x & (x - 1)) ^ x;

    int XOR1 = 0, XOR2 = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] & rightmost)
            XOR1 ^= nums[i];
        else
            XOR2 ^= nums[i];
    }

    if (XOR1 > XOR2)
        return {XOR1, XOR2};

    return {XOR2, XOR1};
}


int main() {
    vector<int> arr = {4, 2, 4, 5, 2, 3, 3, 1};
    vector<int> ans = twoOddNum(arr);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}