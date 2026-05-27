#include <bits/stdc++.h>
using namespace std;

void s_sort(int a[],int n){
    for(int i = 0; i <= n-2;i++){
        int min = i;
        for(int j = i;j <= n-1; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}  

int main(){
    int arr[6] = {6,5,4,3,2,1};
    int num = 6;
    s_sort(arr,num);

    for(int i = 0; i<num ;i++){
        cout <<arr[i] << " ";
    }
    return 0;
}