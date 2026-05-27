#include <bits/stdc++.h>
using namespace std;

int rec(vector<int>&v1){
    if(v1.size() <= 1){
        return -1;
    }
    sort(v1.begin(),v1.end());
    return v1[v1.size()-2];
}

int main(){
    vector<int>v = {23,56,32,78,12};
    cout << rec(v);
    return 0;
}