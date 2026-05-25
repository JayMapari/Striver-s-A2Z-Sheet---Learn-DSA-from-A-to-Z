#include <bits/stdc++.h>
using namespace std;

int rec(int n){
    if(n == 0){
        return 0;
    }
    return n + rec(n-1);
}

int main(){
    int num;
    cout << "Enter the number :";
    cin>>num;
    cout << rec(num);
    return 0;

}