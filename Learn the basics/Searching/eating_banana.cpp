#include<bits/stdc++.h>
using namespace std;


bool canEat(vector<int>& piles, int h, int k) {
    long long hour = 0;

    for (int pile : piles) {
        hour += (pile + k - 1) / k; 
    }

    return hour <= h;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1;
    int high = *max_element(piles.begin(), piles.end());

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canEat(piles, h, mid)) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

int main(){
    vector <int> v1 = {3,6,7,11};
    int nums = 8;
    cout << minEatingSpeed(v1,8);
    return 0;
}
