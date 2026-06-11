#include<bits/stdc++.h>
using namespace std;


int maxindex(vector<vector<int>>&mat, int n, int m, int mid){
    int maxvalue = INT_MIN;
    int index = 0;
    for(int i = 0;i < n;i++){
        if(mat[i][mid] > maxvalue){
            maxvalue = mat[i][mid];
            index = i;
        }
    }
    return index;
}
vector<int> findPeakGrid(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    int low = 0;
    int high = m-1;
    while(low <= high){
        int mid = (low + high)/2;
        int index = maxindex(mat,n,m,mid);
        int left = -1;
        int right = -1;
        if(mid - 1 >= 0){
            left = mat[index][mid-1];
        }
        if(mid + 1 < m){
            right = mat[index][mid + 1];
        }
        if(mat[index][mid] > left && mat[index][mid] > right){
            return {index,mid};
        }
        else if(mat[index][mid] < left){
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
    }
    return {-1,-1};
}


int main(){
    vector<vector<int>> v1 = {{1,4},{3,2}};
    vector<int> v = findPeakGrid(v1);
    cout << v[0] << " " << v[1];
    return 0;

}