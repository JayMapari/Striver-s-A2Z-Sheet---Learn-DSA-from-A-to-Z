#include<bits/stdc++.h>
using namespace std;



vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> st;
    for (int asteroid : asteroids) {
        while (!st.empty() &&
                st.top() > 0 &&
                asteroid < 0 &&
                st.top() < abs(asteroid)) {
            st.pop();
        }
        if (st.empty() || asteroid > 0 || st.top() < 0) {
            st.push(asteroid);
        }
        else if (st.top() == abs(asteroid)) {
            st.pop();
        }

    }

    vector<int> ans(st.size());

    for (int i = st.size() - 1; i >= 0; i--) {
        ans[i] = st.top();
        st.pop();
    }
    return ans;
}

int main(){
    vector<int>arr =  {5,10,-5};
    vector<int>ans = asteroidCollision(arr);
    for(auto x : ans){
        cout << x << " ";
    }
    return 0;
}
