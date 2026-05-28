#include <bits/stdc++.h>
using namespace std;

int rec(vector<int>& v){
    sort(v.begin(),v.end());
    for(int i = 0;i < v.size()-1;i++){
        if(v[i+1] != v[i]+1){
            return v[i]+1;
        }
    }
    if(v[0] == 0){
        return (v[v.size()-1]+1);
    }
    return v[0]-1;
}

int main(){
    vector<int>v1 = {1, 3, 6, 4, 2, 5};
    cout << rec(v1);
    return 0;
}