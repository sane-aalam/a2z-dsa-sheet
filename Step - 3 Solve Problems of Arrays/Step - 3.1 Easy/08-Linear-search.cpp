#include <bits/stdc++.h>
using namespace std;

// Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       for(int currentIndex = 0; currentIndex < N; currentIndex ++){
           int currentElement = arr[currentIndex];
           if(currentElement == K){
               return currentIndex;
           }
       }
       
       return -1;
    }