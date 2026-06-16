#include <bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &nums)  {
    int ans = INT_MAX;
    int n = nums.size();
    int i = 0;
    int low = 0;
    int high = n-1;
    while(low <= high ){
        int mid = (low + high)/2;
        if(nums[mid] <= ans){
            ans = nums[mid];
            i = mid;
        }
        if(nums[mid] >= nums[low] && nums[high] <= nums[low]){
                low = mid + 1;
        }
        else{
            if(nums[mid] <= nums[high]){
                high = mid-1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    if(i == 0){
        return 0;
    }
    int mini = n-i;
    return n - mini;
}

int main (){
    vector<int>v1 = {4,5,6,7,0,1,2};
    cout << findKRotation(v1);
    return 0;

}
