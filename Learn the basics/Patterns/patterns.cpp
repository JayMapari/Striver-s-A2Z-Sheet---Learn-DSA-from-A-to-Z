#include <iostream>
using namespace std;

int main() {
// for(int i = 1; i <= 5; i++){
//     for(int j = 1; j <= 5;  j++){
//         cout << "*";
//     }
//     cout << endl;
// }

// for(int i = 1; i <= 5; i++){
//     for(int a = 1; a <=  i; a++ ){
//         cout << "*";
//     }
//     cout << endl;
// }

// for(int i = 1; i <= 5; i++){
//     for(int a = 1; a <= i;a++){
//         cout << a;
//     }
//     cout << endl;
// }

// for(int i = 1; i <= 5; i++){
//     for(int a = 1; a <= i;a++){
//         cout << i;
//     }
//     cout << endl;
// }


// int ans = 1;
// for(int i = 1; i <= 5; i++){
//     for(int a = 1; a <= i;a++){
//         cout << ans;
//         if (ans == 1){
//             ans = 0;
//         }
//         else{
//             ans = 1;
//         }
//     }
//     cout << endl;
// }

// int ans = 1;
// for(int i = 1; i <= 5; i++){
//     for(int a = 1; a <= i;a++){
//         cout << ans << " ";
//         ans ++;
//     }
//     cout << endl;
// }

// for(int i = 5; i >= 1; i--){
//     for(int a = 1; a <= i;a++){
//         cout << a;
//     }
//     cout << endl;
// }

// for(int i = 5; i >= 1; i--){
//     for(int a = 1; a <= i;a++){
//         cout << "*";
//     }
//     cout << endl;
// }

// string ans = "ABCDE";

//     for(int i = 0; i <= 4; i++){
//         for(int a = 0; a <= i;a++){
//             cout << ans[a];
//         }
//     cout << endl;
// }


string ans = "ABCDE";
for(int i = 4; i >= 0; i--){
    for(int a = 0; a <= i;a++){
        cout << ans[a];
    }
    cout << endl;
}



// for(int i = 1; i <= 5; i++){
//     for(int a = 1; a <= i; a++){
//         cout << "*";
//     }
//     cout << endl;
// }
// for(int i = 5; i >= 1; i--){
//     for(int a = 1; a <= i; a++){
//         cout << "*";
//     }
//     cout << endl;
// }


// string str= "ABCDE";
// for(int i = 0; i <= 4; i++){
//     for(int a = 0; a <= i; a++){
//         cout << str[i];
//     }
//     cout << endl;
// }

// string str= "ABCDE";
// int len = str.size();
// for (int i = 0; i <= 4; i++){
//     for(int a = 0; a <= i; a++){
//         cout << str[(len-1)+a];  
//     }
//     len = len - 1;
//     cout << endl;
// }

// for(int i = 1; i <= 4; i++){
//     for(int a = 1; a <= 4 ; a++){
//         if(i == 2 && i == 3){
//             if(a == 2 or a == 3){
//                 cout << " ";
//             }
//             else{
//                 cout << "*";
//             }
//         }
//         else{
//             cout << "*";
//         }
        
//     }
//     cout << endl;
// }


// int right = 5;
// int left = 5;
// for(int i = 1; i <= 5; i++){
//     for(int a = 1 ; a <= 9 ; a++){
//         if(a >= left && a <= right){
//             cout << "*";
//         }
//         else{
//             cout << " ";
//         }
        
//     }
//     right ++;
//     left--;
//     cout << endl;
// }
// int right1 = 9;
// int left1 = 1;
// for(int i = 1; i <= 5; i++){
//     for(int a = 1 ; a <= 9 ; a++){
//         if(a >= left1 && a <= right1){
//             cout << "*";
//         }
//         else{
//             cout << " ";
//         }
        
//     }
//     right1 --;
//     left1 ++;
//     cout << endl;
// }


    return 0;
}

