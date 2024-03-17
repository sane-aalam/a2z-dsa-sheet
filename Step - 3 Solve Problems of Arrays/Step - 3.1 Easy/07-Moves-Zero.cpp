#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int AreYouNonZeroElement = 0;
	    
	    for(int currentIndex = 0; currentIndex < n; currentIndex ++ ){
	        if(arr[currentIndex] != 0){
	            swap(arr[AreYouNonZeroElement], arr[currentIndex]);
	            AreYouNonZeroElement++;
	        }
	    }
	}
};