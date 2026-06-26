#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void solve(int index, vector<int>& arr, vector<int>& nums) {
    if (index == nums.size()) {
        ans.push_back(arr);
        return;
    }

    arr.push_back(nums[index]);
    solve(index + 1, arr, nums);


    arr.pop_back();
    solve(index + 1, arr, nums);
}

vector<vector<int>> subsets(vector<int>& nums) {
    ans.clear();
    vector<int> arr;
    solve(0, arr, nums);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> v = subsets(nums);

    for (auto subset : v) {
        cout << "{ ";
        for (int x : subset)
            cout << x << " ";
        cout << "}\n";
    }

    return 0;
}