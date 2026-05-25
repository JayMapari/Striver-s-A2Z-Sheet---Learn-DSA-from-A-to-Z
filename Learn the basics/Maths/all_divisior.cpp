#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {50};

    vector<int>v1;
  
    for(int i = 1; i <= v[0];i++){
        if(v[0]%i == 0){
            v1.push_back(i);
        }
    }
    
    
    sort(v1.begin(),v1.end());
    int arr[v1.size()];
    for(int i = 0;i < v1.size();i++){
        arr[i] = v1[i];
    }
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]);i++){
        cout << arr[i] << " ";
    }
    return 0;
}