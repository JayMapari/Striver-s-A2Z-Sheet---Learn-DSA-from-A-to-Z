#include<bits/stdc++.h>
using namespace std;


vector<int> sieve(int n) {
    vector<bool>prime(n+1, true);
    prime[0] = false;
    prime[1] = false;

    for (int i=2;i *i <= n;i++) {
        if (prime[i]) {
            for (int j=i*i;j <= n;j += i) {
                prime[j] = false;
            }
        }
    }
    vector<int> ans;
    for (int i = 2; i <= n; i++) {
        if (prime[i])
            ans.push_back(i);
    }
    return ans;
    }


int main(){
    int num = 10;
    vector<int> ans = sieve(num);
    for(auto x : ans){
        cout << x << " ";
    }
    return 0;
}