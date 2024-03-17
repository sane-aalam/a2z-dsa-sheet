
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    
void solve(vector<int>& arr, int start, int end){

    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
    
        solve(arr,0,k);
        solve(arr,k+1,n-1);
        solve(arr,0,n-1);
    }
};