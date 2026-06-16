#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>nums,int target){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(nums[mid]== target){
            return mid;
        }
        else if(nums[mid] >= target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    vector<int>v1 = {-1,0,3,5,9,12};
    int target = 9;
    cout << BinarySearch(v1,target);
    return 0;
}