#include<bits/stdc++.h>
using namespace std;


    int rec(vector<int>&arr, int days, int ship){
        int counter = 1;
        int n = arr.size();
        int load = 0;
        for(int i = 0; i < n;i++){
            if(load + arr[i] > ship){
                load = arr[i];
                counter++;
            }
            else{
                load = load + arr[i];

            }
        }
        return counter;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while(low <= high){
            int mid = (low + high)/2;
            int time = rec(weights,days,mid);
            if(time <= days){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }


int main(){
    vector<int>v1 = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    cout << shipWithinDays(v1,days);
    return 0;
}
