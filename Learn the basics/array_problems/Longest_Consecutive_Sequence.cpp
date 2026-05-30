#include <bits/stdc++.h>
using namespace std;

    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        vector<int>v;
        for (auto x : nums) {
            st.insert(x);
            cout << x;
        }
        for (auto x : st) {
            v.push_back(x);
        }
 
        int sum = 0;
        int ans = 0;
        if(nums.size() == 1){
            return 1;
        }
        for(int i = 0; i < v.size(); i++){
            if(v[i+1] == v[i]+1){
                sum++;
            }
            else{
                if(ans < sum){
                    ans = sum;
                }
                sum = 0;
            }
        }
        return sum;
    }


int main(){
    vector<int> v1;
    longestConsecutive(v1);
    return 0;
}
