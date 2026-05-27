#include <bits/stdc++.h>
using namespace std;

void rec(int a[], int n){
    if(n <= 1){
        return;
    }
    swap(a[0], a[n-1]);
    rec(a +1,n-2);

    if(n == 5){
        for(int i = 0; i < 5 ; i++){
            cout << a[i] << " ";
        }
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int num = 5;
    rec(arr,num);
    return 0;
}