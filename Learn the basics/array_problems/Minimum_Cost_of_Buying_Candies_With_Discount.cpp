#include <bits/stdc++.h>
using namespace std;


void minimumCost(vector<int>& cost) {
    sort(cost.begin(),cost.end());
    int n = cost.size();
    int sum = 0;
    int counter = 0;
    for(int i = n-1; i >= 0;i--){
        if( counter == 0 || counter % 3 != 0){
            sum += cost[i];
            counter++;
            cout << sum << endl;
        }
        else{
            counter++;
        }
    }
    return;
}


int main(){
    vector<int>v1 = {10,5,9,4,1,9,10,2,10,8};
    minimumCost(v1);

    return 0;
}
