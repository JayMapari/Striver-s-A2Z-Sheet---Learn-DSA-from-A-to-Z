#include <bits/stdc++.h>
using namespace std;

vector<int> rec(vector<int>&v){
    if(v.size() <= 1){
        return v;
    }
    for(int i = 0;i < v.size()-1;i++){
        if(v[i]>v[i+1]){
            swap(v[i],v[i+1]);
        }
    }
    int last = v.back();
    v.pop_back();
    rec(v);
    v.push_back(last);
    return v;
}

int main(){
    vector<int>v1 = {5,3,3,2,4};
    rec(v1);
    for(auto x : v1){
        cout << x << " ";
    }
    return 0;
}