#include<bits/stdc++.h>
using namespace std;


int sumSubarrayMins(vector<int>& arr) {
    int n = arr.size();
    const int MOD = 1e9 + 7;
    vector<int> left(n), right(n);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] > arr[i])
            st.pop();

        if (st.empty())
            left[i] = i + 1;
        else
            left[i] = i - st.top();

        st.push(i);
    }
    while (!st.empty())
        st.pop();
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] >= arr[i])
            st.pop();

        if (st.empty())
            right[i] = n - i;
        else
            right[i] = st.top() - i;

        st.push(i);
    }
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans = (ans + (1LL * arr[i] * left[i] % MOD) * right[i]) % MOD;
    }
    return ans;
}

int main(){
    vector<int>arr = {3,1,2,4};
    cout << sumSubarrayMins(arr);
    return 0;
}