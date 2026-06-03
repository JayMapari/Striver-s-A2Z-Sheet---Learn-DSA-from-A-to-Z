#include <bits/stdc++.h>
using namespace std;



vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int n = grid.size();
    map<int,int>mp;
    vector<int>ans;
    int repeated;
    int missing;
    for(int i = 0; i < grid.size(); i++) {
        for(int j = 0; j < grid[i].size(); j++) {
            mp[grid[i][j]]++;
        }
    }
    for(int i = 1; i <= n*n; i++) {
        if(mp[i] == 2) repeated = i;
        if(mp[i] == 0) missing = i;
    }
    return {repeated,missing};
}


int main(){
    vector<vector<int>>v1 = {{1,3},{2,2}};
    vector<int>v = findMissingAndRepeatedValues(v1);

    cout << v[0] << " " << v[1];
    return 0;

}