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
    int stars = 1;
    for(int i = 1; i <= 2*n-1; i++){
        if(i > n){
            stars--;
        }
        for(int j = 1; j <= stars;j++){
            cout << "*";
        }
        if(i<n){
            stars++;
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
void pattern12(int n){
    int space = 2*(n-1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i;j++){
            cout << j;
        }
        for(int j = 1 ; j<= space;j++){
            cout << " ";
        }
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        space = space - 2;
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
void pattern14(int n){
    for(int i = 1; i <= n; i++){
        for(char c = 'A'; c <= 'A'+i; c++){
            cout << c;
        }
        cout << endl;
    }
}
void pattern15(int n){
    for(int i = 1; i <= n; i++){
        for(char c = 'A'; c <= ('A'+(n-i)) ; c++){
            cout << c;
        }
        cout << endl;
    }
}
void pattern16(int n){
    for(int i = 0; i <= n-1; i++){
        for(char c = 'A'; c <= 'A'+i; c++){
            cout << char('A' + i);
        }
        cout << endl;
    }
}
void pattern17(int n){
    for(int i = 0; i <= n;i++){
        for(int j = 0; j <= n-i;j++){
            cout << " ";
        }
        for(int j = 0 ;j <= i; j++){
            cout << (char)('A'+ j);
        }
        for(int j = i-1; j >= 0 ;j--){
            cout << (char)('A'+j);
        }
        cout << endl;

    }
}
void pattern18(int n){
    for(int i = 1; i <= n;i++){
        for(int j = n-i;j <= n-1 ; j++){
            cout << char('A' + j);
        }
        cout << endl;
    }
}
void pattern19(int n){
    int space = 0;
    int count = n;
    for(int i = 1; i <=n; i++){
        for(int j = count; j >= 1; j--){
            cout << "*";
        }
        for(int j = 1; j <= space;j++){
            cout << " ";
        }
        for(int j = count; j >= 1; j--){
            cout << "*";
        }
        count--;
        space = space + 2;
        cout << endl;
    }
    int space1 = 2*(n-1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i;j++){
            cout << "*";
        }
        for(int j = 1 ; j<= space1;j++){
            cout << " ";
        }
        for(int j = i; j >= 1; j--){
            cout << "*";
        }
        space1 = space1 - 2;
        cout << endl;
    }
}
void pattern20(int n){
    int stars = 1;
    int s = 2;
    for(int i = 1; i <= 2*n-1; i++){
        if(i > n){
            stars--;
            s = s - 2;
        }
        for(int j = 1;j <= stars;j++){
            cout << "*";
        }
        for(int j = 1; j <= 2*n-s; j++){
            cout << " ";
        }
        for(int j = 1; j<=stars;j++){
            cout << "*";
        }
        if(i < n){
            stars++;
            s = s + 2;
        }
        cout << endl;
    }
    
}
void pattern21(int n){
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= n; j++){
            if(i > 1 && i < n && j > 1 && j < n){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }
}
void pattern22(int n){
    //??
}



int main() {
    int t;
    cout << "Enter the test cases :";
    cin >> t;   // number of test cases

    while(t--) {
        int n;
        cin >> n;
        pattern20(n); // function call change the function name to run other patterns

        cout << endl; // space between test cases
    }

    return 0;
}
