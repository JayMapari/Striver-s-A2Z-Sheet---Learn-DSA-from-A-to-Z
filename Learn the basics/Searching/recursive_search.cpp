#include <bits/stdc++.h>
using namespace std;

int rec(vector<int>nums,int low ,int high, int target){
    if(high < low){
        return -1;
    }
    int mid = (low + high)/2;
    if(nums[mid] == target){
        return mid;
    }
    else if(nums[mid] >= target){
        return(rec(nums,low,mid-1,target));
    }
    return (rec(nums,mid+1,high,target));
}

int BinarySearch(vector<int>nums,int target){
    return rec(nums,0,nums.size()-1,target);
}

int main(){
    vector<int>v1 = {-1,0,3,5,9,12};
    int target = 9;
    cout << BinarySearch(v1,target);
    return 0;
}