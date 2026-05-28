#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {

        // Last i elements are already sorted
        for(int j = 0; j < n - i - 1; j++) {

            // Swap if current element is greater
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


// void merge(int arr[], int low, int mid, int high) {

//     vector<int> temp;

//     int left = low;
//     int right = mid + 1;

//     // Merge both halves
//     while(left <= mid && right <= high) {

//         if(arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     // Remaining elements from left half
//     while(left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     // Remaining elements from right half
//     while(right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     // Copy back to original array
//     for(int i = low; i <= high; i++) {
//         arr[i] = temp[i - low];
//     }
// }

// void mergeSort(int arr[], int low, int high) {

//     if(low >= high) {
//         return;
//     }

//     int mid = (low + high) / 2;

//     mergeSort(arr, low, mid);       // Left half
//     mergeSort(arr, mid + 1, high);  // Right half

//     merge(arr, low, mid, high);
// }

// int main() {

//     int arr[] = {5, 2, 4, 1, 3};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     mergeSort(arr, 0, n - 1);

//     cout << "Sorted array: ";

//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }