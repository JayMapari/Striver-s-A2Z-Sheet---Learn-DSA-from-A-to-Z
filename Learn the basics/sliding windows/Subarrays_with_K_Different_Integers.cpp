#include<bits/stdc++.h>
using namespace std;


int solve(vector<int>& nums, int k) {
    if (k < 0)
        return 0;

    unordered_map<int, int> ump;
    int left = 0, cnt = 0;

    for (int right = 0; right < nums.size(); right++) {
        ump[nums[right]]++;

        while (ump.size() > k) {
            ump[nums[left]]--;
            if (ump[nums[left]] == 0)
                ump.erase(nums[left]);
            left++;
        }

        cnt += right - left + 1;
    }

    return cnt;
}
int subarraysWithKDistinct(vector<int>& nums, int k) {
    return solve(nums, k) - solve(nums, k - 1);
    }

int main(){
    vector<int>nums = {1,2,1,2,3};
    int k = 2;
    cout << subarraysWithKDistinct(nums,k);
    return 0;
}
