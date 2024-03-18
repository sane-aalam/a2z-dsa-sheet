//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
private:
 int FirstPosition(int arr[], int n, int key){
        int start = 0;
        int end = n - 1;
        int result = -1;
        int mid = 0;
        
        while(start <= end){
            mid = start + (end - start)/2;
            if(arr[mid] == key){
                result = mid;
                // we have to move into the left side becuase, we have to find out the smallest element into the sorted array
                end = mid - 1;
            }else if(arr[mid] < key){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return result;
    }
    int LastPosition(int arr[], int n, int key){
        int start = 0;
        int end = n - 1;
        int result = -1;
        int mid = 0;
        
        while(start <= end){
            mid = start + (end - start)/2;
            if(arr[mid] == key){
                result = mid;
                // we have to go right side to find out the lastest element index into the sorted array
                start = mid + 1;
            }else if(arr[mid] < key){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return result;
    }
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int first = FirstPosition(arr,n,x);
	    int second = LastPosition(arr,n,x);
	    
	    // first and second Equal both are return -1 
	    // which means element is not present into the array 
	    // so we can return 0;
	    if(first == -1 && second == -1){
	        return 0;
	    }else{
	        int total = second - first + 1;
	        return total;
	    }
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
