#include <bits/stdc++.h>
using namespace std;


    vector<int> majorityElement(vector<int>& nums) {
        double n = nums.size()/3;
        unordered_map<int, int> ump;
        vector<int>v;
        for (auto x : nums) {
            ump[x]++;
        }

        for(auto it:ump){
            if(it.second > n){
                v.push_back(it.first);
            }
        }
        return {v};
    }

int main(){
    vector<int>v1 = {3,2,3};
    vector<int>ans = majorityElement(v1);
    for(auto x : ans){
        cout << x << " ";
    }
    return 0;
}
