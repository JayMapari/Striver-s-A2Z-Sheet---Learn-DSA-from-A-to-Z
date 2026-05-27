#include <bits/stdc++.h>
using namespace std;

int rec(vector<int>& v1){

    vector<int> arr;

    map<int,int> mpp;

    for(int i = 0; i < v1.size(); i++){
        mpp[v1[i]]++;
    }

    for(auto it : mpp){
        arr.push_back(it.first);
    }

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return arr.size();
}

int main(){

    vector<int> v = {1,1,4,6,6,7,7,7,7,7,3,3,3,3,3};

    cout << rec(v);

    return 0;
}