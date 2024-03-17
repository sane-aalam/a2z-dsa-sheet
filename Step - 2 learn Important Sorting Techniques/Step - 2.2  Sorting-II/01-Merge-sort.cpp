#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


class Solution{
    public:
    void merge(int arr[], int s, int e, int m)
    {
         // Your code here
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    
    // creating temp array for storing the two sorted array 
    int *first = new int[len1];
    int *second = new int[len2];
    
    int mainArrayIndex = s;
    // copy values
    for (int i = 0; i < len1; i++){
    first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;

    for (int i = 0; i < len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    // merging two sorted arrays - simple appraoch which is smallest push into orignal array
    mainArrayIndex = s;
    int index1 = 0;
    int index2 = 0;
    
    while (index1 < len1 && index2 < len2){
        if (first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        } else
        {
            arr[mainArrayIndex++] = second[index2++];

        }
    }
    
    while (index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;

    delete[] second;
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
         if(l>=r){
           return;
       }
       
       int mid = l + (r-l)/2;
      mergeSort(arr, l,  mid);
      
      mergeSort(arr, mid+1, r);
      
      merge(arr,l,r,mid);
    }
};

int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}