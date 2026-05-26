#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {2,4,6,6,5,6,2};
    int num = 7;

    map<int,int>mpp;
    for(int i = 0;i<num;i++){
        mpp[arr[i]]++;
    }

    int q;
    cin>> q;
    while(q--){
        int n;
        cin >> n;
        cout << mpp[n] << endl;
    }
    return 0;
}