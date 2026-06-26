#include<bits/stdc++.h>
using namespace std;


void solve(int index, vector<int>& candidates, int target, vector<vector<int>>arr, vector<int>& v) {

    if (target == 0) {
        arr.push_back(v);
        return;
    }
    
    for (int i = index; i < candidates.size(); i++) {
        if (i > index && candidates[i] == candidates[i - 1])continue;
        if (candidates[i] > target)break;
        v.push_back(candidates[i]);
        solve(i + 1,candidates,target-candidates[i],arr,v);
        v.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> result;
    vector<int> v;
    solve(0, candidates, target, result, v);
    return result;
}


int main(){
    vector<int>candidates = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>>v = combinationSum2(candidates,target);
    for(auto row : v){
        for(auto it :row){
            cout << it <<" ";
        }
    }
    return 0;
}