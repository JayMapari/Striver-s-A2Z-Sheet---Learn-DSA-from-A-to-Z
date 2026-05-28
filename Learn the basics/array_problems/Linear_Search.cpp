#include <bits/stdc++.h>
using namespace std;

int rec(vector<int>&v, int t){
    for(int i = 0;i < v.size();i++){
        if(v[i] == t){
            return i;
        }
        }
        return -1;

    }


int main(){
    vector<int>v1 = {2, -4, 4, 0, 10};
    int target = 0;
    cout << rec(v1,target);
    return 0;
}