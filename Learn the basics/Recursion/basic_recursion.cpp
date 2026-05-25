#include <bits/stdc++.h>
using namespace std;

int num = 0;
void rec(){
    cout << "hello" << endl;
    if(num > 10){
        return;
    }
    num++;
    rec();
    
}  

int main(){

    rec();
    return 0;
}