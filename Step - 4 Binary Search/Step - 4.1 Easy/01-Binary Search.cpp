//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int key) {

        int start = 0;
        int end = n - 1;
        int mid = start + (end - start)/2;

        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid] == key){
                return mid;
            }else if(arr[mid] < key){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            // update the mid of the array
            mid = start + (end - start)/2;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}
