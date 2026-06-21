#include<bits/stdc++.h>
using namespace std;



void rotat(vector<int>& nums, int k) {
    k = k % nums.size();
    vector<int>v;
    for(int i = 0;i < k;i++){
        int temp = nums.back();
        nums.pop_back();
        v.insert(v.begin(),temp);
    }
    nums.insert(nums.begin(),v.begin(),v.end());

    return;
}


int main(){
    vector<int>v  = {1,2,3,4,5,6,7};
    int k = 3;
    rotat(v,k);
    return 0;
}