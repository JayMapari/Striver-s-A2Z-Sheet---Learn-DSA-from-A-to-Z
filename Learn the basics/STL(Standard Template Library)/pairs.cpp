#include <bits/stdc++.h>
using namespace std;

int main(){
    //default pair
    pair<int,int> p = {1,2};
    cout << p.first << " " << p.second << endl;

    //nested pair
    pair<int, pair<int,int>> pari = {1,{34,67}};
    cout << pari.first <<" " << pari.second.second;

    //array of pairs
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout << endl << arr[2].first;
    
    //more nested pair
    pair<pair<pair<int,int>,pair<int,int>>,int> it = {{{1,3},{4,5}},6};
        cout<< endl << it.first.first.first;
    return 0;
}
