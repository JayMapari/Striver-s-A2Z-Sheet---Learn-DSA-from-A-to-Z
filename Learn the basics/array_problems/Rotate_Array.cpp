#include <bits/stdc++.h>
using namespace std;

int rec(vector<int>& v,int k){
    
    for(int i = 0;i < k;i++){
        int temp = v.back();
        v.pop_back();
        v.insert(v.begin(),temp);
    }
    return v.size();
}

int main(){
    vector <int> v1 = {1,2};
    int num = 2;
    rec(v1,num);
    for(int i = 0;i < v1.size();i++){
        cout << v1[i] << " ";
    }
    return 0;
}