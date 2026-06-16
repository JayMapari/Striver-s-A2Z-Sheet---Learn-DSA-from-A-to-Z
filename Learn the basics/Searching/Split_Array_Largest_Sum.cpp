#include<bits/stdc++.h>
using namespace std;


int rec(vector<int> &nums, int value){
    int n = nums.size();
    int tarr = 1;
    int sum = 0;
    for(int i = 0;i < n;i++){
        if(nums[i] + sum > value){
            tarr++;
            sum = nums[i];
        }
        else{
            sum += nums[i];
        }
    }
    return tarr;
}
int splitArray(vector<int>& nums, int k) {
    int n = nums.size();
    int low = *max_element(nums.begin(),nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    while(low <= high){
        int mid = (low + high)/2;
        if(rec(nums,mid) > k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low ;
}


int main(){
    vector<int>v1 = {7,2,5,10,8};
    int k = 2;
    cout << splitArray(v1,k);
    return 0;
}