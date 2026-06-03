#include <bits/stdc++.h>
using namespace std;


int maxSubArray(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int sum = 0;
        for(int i = 0; i < nums.size();i++){
            sum += nums[i];

            if(sum > mini){
                mini = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        return mini;

    }
 
int main(){
    vector<int>v1 = {1,2,3,4,5};
    cout << maxSubArray(v1);
    return 0;
}