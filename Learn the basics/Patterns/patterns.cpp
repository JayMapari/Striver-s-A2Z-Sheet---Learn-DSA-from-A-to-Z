#include <iostream>
using namespace std;

// Function for pattern
void pattern1(int n){

    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n){
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1 ; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1 ; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern5(int n){
    for(int i = n; i >= 1; i--){
        for(int a = 1; a <= i ;a++){
        cout << "*";
        }
        cout << endl;
    }
}
void pattern6(int n){

    for(int i = n; i >= 1; i--){
        for(int a = 1; a <= i ;a++){
        cout << a;
        }
        cout << endl;
    }
}
void pattern7(int n){
    int left = n;
    int right = n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*n-1; j++){
            if(j >= left && j <= right){
                cout << "*";
            }
            else{
             cout << " ";
            }
        }
        right++;
        left--;
        cout << endl;
    }
}
void pattern8(int n){

    int right = 2*n-1;
    int left = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*n-1; j++){
            if(j >= left && j <= right){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        right--;
        left++;
        cout << endl;
    }
}
void pattern9(int n){
    int left = n;
    int right = n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*n-1; j++){
            if(j >= left && j <= right){
                cout << "*";
            }
            else{
             cout << " ";
            }
        }
        right++;
        left--;
        cout << endl;
    }

    int right1 = 2*n-1;
    int left1 = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*n-1; j++){
            if(j >= left1 && j <= right1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        right1--;
        left1++;
        cout << endl;
    }
}
void pattern10(int n){
    for(int i = 1; i <= n; i++){
        for(char c = 'A'; c <= 'A'+i; c++){
            cout << c;
        }
        cout << endl;
    }
}



void pattern11(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << ans;
            if(ans == 1){
                ans = 0;
            }
            else{
                ans = 1;
            }
        }
        cout << endl;
    }
}
void pattern13(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << ans << " ";
            ans++;
        }
        cout << endl;
    }
}





int main() {
    int t;
    cout << "Enter the test cases :";
    cin >> t;   // number of test cases

    while(t--) {
        int n;
        cin >> n;
        pattern10(n); // function call change the function name to run other patterns

        cout << endl; // space between test cases
    }

    return 0;
}