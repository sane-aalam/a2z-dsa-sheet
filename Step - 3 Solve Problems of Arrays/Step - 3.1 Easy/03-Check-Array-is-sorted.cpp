#include <iostream>
#include <vector>
using namespace std;

int isSorted(int n, vector<int> a) {
    // Write your code here.
    int issortedArray = 0;

    for(int currentIndex = 0; currentIndex < a.size()-1; currentIndex++){
       if(a[currentIndex] <= a[currentIndex+1]){
          issortedArray = 1;
       }else if(a[currentIndex] > a[currentIndex +1]){
          issortedArray = 0;
          break;
       }
    }
    return issortedArray;
}