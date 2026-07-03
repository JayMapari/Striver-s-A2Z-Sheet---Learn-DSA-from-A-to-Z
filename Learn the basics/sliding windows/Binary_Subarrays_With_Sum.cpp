#include<bits/stdc++.h>
using namespace std;


int solve(vector<int>& nums, int goal){
    if(goal < 0)return 0;
    int left = 0;
    int sum = 0;
    int len = 0;
    for(int right = 0;right < nums.size();right++){
        sum += nums[right];
            while(sum > goal){
                sum -= nums[left];
                left++;

            }
        len += right-left+1;
    }
    return len;
}
int numSubarraysWithSum(vector<int>& nums, int goal) {
    return solve(nums,goal) - solve(nums, goal-1);
}

int main(){
    vector<int> nums = {1,0,1,0,1};
    int goal = 2;
    cout << numSubarraysWithSum(nums,goal);
    return 0;
}
