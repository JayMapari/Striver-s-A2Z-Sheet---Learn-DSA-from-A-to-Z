#include <bits/stdc++.h>
using namespace std;

int rec(vector<int>& v1){
    int max = 0;
    for(int i = 0; i < v1.size();i++){
        if(max < v1[i]){
            max = v1[i];
        }
    }
    return max;
}

int main(){
    vector<int> v = {1,2,3,4};
    cout << rec(v);
    return 0;
}