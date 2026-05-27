#include <bits/stdc++.h>
using namespace std;

void rec(int arr[],int n){
    if(n == 0){
        return;
    }
    rec(arr,n-1);
    
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int num = 5;
    rec(arr,num);
    return 0;
}