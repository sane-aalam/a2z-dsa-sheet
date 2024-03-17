#include <vector>
#include <iostream>
using namespace std;

/*  
   student 2 appraoch->
   1- there are two studnet in the class 5
   2- student 1 got rank1
   3- then student 2 got rank2

   next assign the rank for next all class

*/

class Solution{
public:	
	int print2largest(int arr[], int n) {
	     int firstLargest = -1, secondLargest = -1;
	    
	    for(int i = 0 ; i < n ; i++) {
	        if(arr[i] > firstLargest) {
	            secondLargest = firstLargest;
	            firstLargest = arr[i];
	        } 
	        else if(arr[i] < firstLargest and arr[i] > secondLargest) {
	            secondLargest = arr[i];
	        }
	    }
	    return secondLargest;
	}
};