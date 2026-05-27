#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {1,2,2,3,3,3};

    map<int,int> mpp;

    for(int i = 0; i < v.size(); i++){
        mpp[v[i]]++;
    }

    vector<vector<int>> ans;

    for(auto it : mpp){
        ans.push_back({it.first, it.second});
    }

    for(int i = 0;i < ans.size();i++){
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }

    return 0;
}