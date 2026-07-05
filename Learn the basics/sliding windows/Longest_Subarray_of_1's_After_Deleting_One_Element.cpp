#include<bits/stdc++.h>
using namespace std;


int longestSubarray(vector<int>& nums) {
    int left = 0, zero = 0, maxlen = 0;

    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] == 0) {
            zero++;
        }
        while (zero > 1) {
            if (nums[left] == 0) {
                zero--;
            }
            left++;
        }
        maxlen = max(maxlen, right - left + 1 - 1);
    }

    return maxlen;
}

int main(){
    vector<int>v = {1,1,0,1};
    cout << longestSubarray(v);
    return 0;
}