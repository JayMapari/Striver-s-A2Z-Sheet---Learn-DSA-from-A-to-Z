#include <bits/stdc++.h>
using namespace std;



vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    int n = intervals.size();
    vector<vector<int>>ans;
    ans.push_back(intervals[0]);
    for(int i = 1; i < n ;i++){
        if(ans.back()[1] >=intervals[i][0]){
            ans.back()[1] = max(ans.back()[1],intervals[i][1]);
        }
        else{
            ans.push_back(intervals[i]);
        }
    }
    return ans;
}

int main(){
    vector<vector<int>>v1 = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>>ans = merge(v1);

    for(auto row:ans){
        for(auto x : row){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
